//
// Author: huanglijun 
// Date  : 2019/7/9
// Desc  : 125. Valid Palindrome
//

/*
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Note: For the purpose of this problem, we define empty string as valid palindrome.

Example 1:

Input: "A man, a plan, a canal: Panama"
Output: true
Example 2:

Input: "race a car"
Output: false
 */

#ifndef TESTCODE_SOLUTION125_H
#define TESTCODE_SOLUTION125_H

/*
ascii码
 0-9  48-57
 A-Z  65-90
 a-z  97-122
 a-A = 32
 */

bool isPalindrome(string s) {
    int slen = (int)s.size();
    if(slen <= 1) return true;

    int sPos = 0;
    int ePos = slen-1;
    for(int i = 0; i < slen; i++){
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
            if(s[i] > 'Z') s[i] -= 32;
            for(int j = ePos; j >= 0; j--){
                if((s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= 'a' && s[j] <= 'z') || (s[j] >= '0' && s[j] <= '9')){
                    if(s[j] > 'Z') s[j] -= 32;
                    if(s[i] != s[j]){
                        return false;
                    } else {
                        sPos++;
                        ePos--;
                        break;
                    }
                } else {
                    ePos--;
                }
            }
        } else {
            sPos++;
        }

        if(sPos >= ePos) break;
    }
    return true;
}

#endif //TESTCODE_SOLUTION125_H
