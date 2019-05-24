//
// Created by Administrator on 2019/4/30.
//

#ifndef TESTCODE_SOLUTION3_H
#define TESTCODE_SOLUTION3_H

#include <iostream>
#include <vector>
using namespace std;

/*

3 Longest Substring Without Repeating Characters

Given a string, find the length of the longest substring without repeating characters.

Example 1:

Input: "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
             Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
 */

int lengthOfLongestSubstring(string s) {
    int maxLen = 0;
    int sz = s.size();
    for(int i = 0; i < sz; i++){
        string str = "";
        for(int j = i; j < sz; j++){
            int n = str.find(s[j]);
            if(n == string::npos) { // -1
                str += s[j];
            } else {
                break;
            }
        }
        maxLen = str.size() > maxLen ? str.size() : maxLen;
        if(maxLen >= sz-i) break;
    }
    return maxLen;
}

#endif //TESTCODE_SOLUTION3_H
