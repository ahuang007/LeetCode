//
// Author: huanglijun 
// Date  : 2019/5/25
// Desc  : Solution5
//

#ifndef TESTCODE_SOLUTION5_H
#define TESTCODE_SOLUTION5_H

#include <string>

using namespace std;

/*
 * 5. Longest Palindromic Substring

Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.

Example 1:

Input: "babad"
Output: "bab"
Note: "aba" is also a valid answer.
Example 2:

Input: "cbbd"
Output: "bb"
 */

string longestPalindrome(string s) {
    int slen = s.size();
    if(slen <= 1) return s;

    string retStr = "";
    bool exist = true;
    int maxLen = slen;
    for(; maxLen >= 0; maxLen--){
        int i = 0; // 起点位置
        for(; i <= slen-maxLen; i++){
            exist = true;
            int tmp = (maxLen%2==0) ? (maxLen/2) : (maxLen-1)/2;
            for(int j = i; j < i + tmp; j++){
                if(s[j] != s[(maxLen-1) - (j-i) + i]){
                    exist = false;
                    break;
                }
            }

            if(exist) {
                for(int k = i; k < i + maxLen; k++){
                    retStr += s[k];
                }
                return retStr;
            }
        }
    }
    return retStr;
}

#endif //TESTCODE_SOLUTION5_H
