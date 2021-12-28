#pragma once
/*
* 10. Regular Expression Matching
* Given an input string s and a pattern p, implement regular expression matching with support for '.' and '*' where:

'.' Matches any single character.​​​​
'*' Matches zero or more of the preceding element.
The matching should cover the entire input string (not partial).

 
Example 1:

Input: s = "aa", p = "a"
Output: false
Explanation: "a" does not match the entire string "aa".
Example 2:

Input: s = "aa", p = "a*"
Output: true
Explanation: '*' means zero or more of the preceding element, 'a'. Therefore, by repeating 'a' once, it becomes "aa".
Example 3:

Input: s = "ab", p = ".*"
Output: true
Explanation: ".*" means "zero or more (*) of any character (.)".
 

Constraints:

1 <= s.length <= 20
1 <= p.length <= 30
s contains only lowercase English letters.
p contains only lowercase English letters, '.', and '*'.
It is guaranteed for each appearance of the character '*', there will be a previous valid character to match.
*/

#include <string>
#include <map>
#include <vector>
using std::string;
using std::map;
using std::vector;

class Solution10 {
public:
    // 递归
    bool isMatch(string s, string p) {
        if (p.empty()) {
            return s.empty();
        }

        bool first_match = (!s.empty() && (s[0] == p[0] || p[0] == '.'));
        if (p.size() >= 2 && p[1] == '*') {
            return (first_match && isMatch(s.substr(1, s.size()-1), p)) || isMatch(s, p.substr(2, p.size() - 2));
        } else {
            return first_match && isMatch(s.substr(1, s.size() - 1), p.substr(1, p.size() - 1));
        }
    }

    // 记忆化
    map<string, bool> mp;
    bool isMatch2(string s, string p) {
        if (p.empty()) {
            return s.empty();
        }

        return dfs(s, p, 0, 0);
    }

    bool dfs(const string& s, const string& p, int i, int j) {
        string key = to_string(i) + "_" + to_string(j);
        if (mp.find(key) != mp.end()) {
            return mp[key];
        }

        bool ret;
        if (j == p.size()) {
            ret = (i == s.size());
        } else {
            bool first_match = (!s.empty() && (s[i] == p[j] || p[j] == '.'));
            if (j + 1 < p.size() && p[j + 1] == '*') {
                ret = (first_match && dfs(s, p, i+1, j)) || dfs(s, p, i, j+2);
            } else {
                ret = first_match && dfs(s, p, i + 1, j + 1);
            }
        }
        mp.insert({ key, ret });

        return ret;
    }

    // 动态规划
    bool isMatch3(string s, string p) {
        vector<vector<bool>> vec(s.size() + 1, vector<bool>(p.size() + 1, false));
        vec[s.size()][p.size()] = true;
        for (int i = (int)s.size(); i >= 0; i--) {
            for (int j = (int)p.size() - 1; j >= 0; j--) {
                bool first_match = (i < s.size() && (p.at(j) == s.at(i) || p.at(j) == '.'));
                if (j + 1 < p.size() && p.at(j + 1) == '*') {
                    vec[i][j] = vec[i][j + 2] || first_match && vec[i + 1][j];
                } else {
                    vec[i][j] = first_match && vec[i + 1][j + 1];
                }
            }
        }

        return vec[0][0];
     }
};
