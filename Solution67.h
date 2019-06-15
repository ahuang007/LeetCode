//
// Author: huanglijun 
// Date  : 2019/6/15
// Desc  : 67. Add Binary
//

/*
Given two binary strings, return their sum (also a binary string).

The input strings are both non-empty and contains only characters 1 or 0.

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
 */

string addBinary(string a, string b) {
    string str = "";

    int alen = a.size();
    int blen = b.size();
    int len = alen > blen ? alen : blen;
    bool over = false;
    for(int i = 0; i < len; i++){
        int num = 0;

        if(i < alen){
            if(a[alen-1-i] == '1'){
                num++;
            }
        } else {
            if(!over && alen < blen){
                str = b.substr(0, blen-i) + str;
                break;
            }
        }
        if(i < blen){
            if(b[blen-1-i] == '1'){
                num++;
            }
        } else {
            if(!over && blen < alen){
                str = a.substr(0, alen-i) + str;
                break;
            }
        }

        if(over) {
            num++;
            over = false;
        }

        if(num >= 2){
            over = true;
            num -= 2;
        }

        if(num == 0){
            str = "0" + str;
        } else if(num == 1){
            str = "1" + str;
        }
    }

    if(over){
        str = "1" + str;
    }

    return str;
}

#ifndef TESTCODE_SOLUTION67_H
#define TESTCODE_SOLUTION67_H

#endif //TESTCODE_SOLUTION67_H
