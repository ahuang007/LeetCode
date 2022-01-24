#pragma once
/*
* 22. Generate Parentheses
* Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Example 2:

Input: n = 1
Output: ["()"]

Constraints:

1 <= n <= 8
*/

class Solution22 {
public:
    // 思路：找左括号，每找到一个左括号，就在其后面加一个完整的括号，最后再在开头加一个()，就形成了所有的情况，
    // 需要注意的是，有时候会出现重复的情况，所以用set数据结构去重，最后我们再把set转为vector即可。
    vector<string> generateParenthesis(int n) {
        set<string> results;
        if (n == 0) {
            results.insert("");
        } else {
            vector<string> parent_results = generateParenthesis(n - 1);
            for (auto parent_result : parent_results) {
                for (int i = 0; i < parent_result.size(); i++) {
                    if (parent_result[i] == '(') {
                        string result = parent_result;
                        result.insert(result.begin() + i + 1, '(');
                        result.insert(result.begin() + i + 2, ')');
                        results.emplace(result);
                    }
                }
                results.emplace("()" + parent_result);
            }
        }

        return vector<string>(results.begin(), results.end());
    }
};
