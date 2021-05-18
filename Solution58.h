//
// Author: huanglijun 
// Date  : 2019/6/15
// Desc  : 58. Length of Last Word
//

/*
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

Example:

Input: "Hello World"
Output: 5
 */

int lengthOfLastWord(string s) {
    int len = (int)s.size();
    int num = 0;
    bool exist = false;
    for(int i = len-1; i >= 0; i--){
        if(s[i] != ' '){
            exist = true;
            num++;
        } else {
            if(exist) break;
        }
    }
    return num;
}

#ifndef TESTCODE_SOLUTION58_H
#define TESTCODE_SOLUTION58_H

#endif //TESTCODE_SOLUTION58_H
