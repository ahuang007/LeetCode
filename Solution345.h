//
// Author: huanglijun 
// Date  : 2019/7/24
// Desc  : 345. Reverse Vowels of a String
//

/*
 * Write a function that takes a string as input and reverse only the vowels of a string.

Example 1:

Input: "hello"
Output: "holle"
Example 2:

Input: "leetcode"
Output: "leotcede"
Note:
The vowels does not include the letter "y".
 */

#ifndef TESTCODE_SOLUTION345_H
#define TESTCODE_SOLUTION345_H

string reverseVowels(string s) {
    int slen = (int)s.size();
    if(slen <= 1) return s;

    int sPos = 0;
    int ePos = slen-1;
    while(sPos < ePos){
        bool bs = false;
        bool be = false;
        if(s[sPos] == 'a' || s[sPos] == 'e' || s[sPos] == 'i' || s[sPos] == 'o' || s[sPos] == 'u' ||
           s[sPos] == 'A' || s[sPos] == 'E' || s[sPos] == 'I' || s[sPos] == 'O' || s[sPos] == 'U'){
            bs = true;
        } else {
            sPos++;
        }

        if(s[ePos] == 'a' || s[ePos] == 'e' || s[ePos] == 'i' || s[ePos] == 'o' || s[ePos] == 'u' ||
           s[ePos] == 'A' || s[ePos] == 'E' || s[ePos] == 'I' || s[ePos] == 'O' || s[ePos] == 'U'){
            be = true;
        } else {
            ePos--;
        }

        if(be && bs){
            char tmp = s[sPos];
            s[sPos] = s[ePos];
            s[ePos] = tmp;

            sPos++;
            ePos--;
        }
    }
    return s;
}

#endif //TESTCODE_SOLUTION345_H
