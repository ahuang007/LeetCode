//
// Author: huanglijun 
// Date  : 2019/7/26
// Desc  : 91. Decode Ways
//

/*
 * A message containing letters from A-Z is being encoded to numbers using the following mapping:

'A' -> 1
'B' -> 2
...
'Z' -> 26
Given a non-empty string containing only digits, determine the total number of ways to decode it.

Example 1:

Input: "12"
Output: 2
Explanation: It could be decoded as "AB" (1 2) or "L" (12).
Example 2:

Input: "226"
Output: 3
Explanation: It could be decoded as "BZ" (2 26), "VF" (22 6), or "BBF" (2 2 6).
 */

#ifndef TESTCODE_SOLUTION91_H
#define TESTCODE_SOLUTION91_H

int numDecodings(string s) {
    int slen = s.size();
    if(slen <= 0) return 1;
    if(slen >= 1 && s[0] == '0') return 0;
    if(slen >= 2 && (s[1] == '0' && s[0] > '2')) return 0;
    int count = 0;
    for(int i = 0; i < slen; i++){
        if(s[i] > '2'){
            count++;
        } else {
            break;
        }
    }
    if(count >= 1) return numDecodings(s.substr(count));

    int num = 0;
    if(slen > 2){
        if(s[0] >= '1' && s[0] <= '2') {
            if(s[1] == '0' || (s[0] == '2' && s[1] > '6')) {
                return numDecodings(s.substr(2));
            } else {
                return numDecodings(s.substr(1)) + numDecodings(s.substr(2));
            }
        } else {
            return numDecodings(s.substr(1));
        }
    } else if(slen == 2){
        if(s[0] >= '1' && s[0] <= '2') {
            if(s[1] == '0' || (s[0] == '2' && s[1] > '6')) {
                num = 1;
            } else {
                num = 2;
            }
        } else {
            num = 1;
        }
    } else if(slen == 1) {
        if(s[0] >= '1' && s[0] <= '9') {
            num = 1;
        } else {
            num = 0;
        }
    } else {
        num = 1;
    }
    return num;
}

//todo: 目前算法是对的 但是超时 待优化

#endif //TESTCODE_SOLUTION91_H
