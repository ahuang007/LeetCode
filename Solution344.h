//
// Author: huanglijun 
// Date  : 2019/7/23
// Desc  : 344. Reverse String
//

/*
 * Write a function that reverses a string. The input string is given as an array of characters char[].

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

You may assume all the characters consist of printable ascii characters.



Example 1:

Input: ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
 */

#ifndef TESTCODE_SOLUTION344_H
#define TESTCODE_SOLUTION344_H

void reverseString(vector<char>& s) {
    int slen = (int)s.size();
    if(slen <= 1) return;

    for(int i = 0; i < slen/2; i++){
        int j = (slen-1) - i;
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
}

#endif //TESTCODE_SOLUTION344_H
