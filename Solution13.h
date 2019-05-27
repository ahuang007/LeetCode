//
// Author: huanglijun 
// Date  : 2019/5/27
// Desc  : Solution13
//

#ifndef TESTCODE_SOLUTION13_H
#define TESTCODE_SOLUTION13_H

#include <map>
#include <string>
using namespace std;

/*
13. Roman to Integer

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, two is written as II in Roman numeral, just two one's added together. Twelve is written as, XII, which is simply X + II. The number twenty seven is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer. Input is guaranteed to be within the range from 1 to 3999.

Example 1:

Input: "III"
Output: 3
Example 2:

Input: "IV"
Output: 4
Example 3:

Input: "IX"
Output: 9
Example 4:

Input: "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
Example 5:

Input: "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 */

//map<char, int> mpSv;
//mpSv['I'] = 1;
//mpSv['V'] = 5;
//mpSv['X'] = 10;
//mpSv['L'] = 50;
//mpSv['C'] = 100;
//mpSv['D'] = 500;
//mpSv['M'] = 1000;

int romanToInt(string s) {
    int num = 0;
    int slen = s.size();
    if(slen <= 0) return num;

    char c = 'I';
    int pos = string::npos;
    while(true){
        pos = s.find('M');
        if(pos != string::npos){
            num += 1000;
            break;
        }

        pos = s.find('D');
        if(pos != string::npos){
            num += 500;
            break;
        }

        pos = s.find('C');
        if(pos != string::npos){
            num += 100;
            break;
        }

        pos = s.find('L');
        if(pos != string::npos){
            num += 50;
            break;
        }

        pos = s.find('X');
        if(pos != string::npos){
            num += 10;
            break;
        }

        pos = s.find('V');
        if(pos != string::npos){
            num += 5;
            break;
        }

        pos = s.find('I');
        if(pos != string::npos){
            num += 1;
            break;
        }

        if(pos == string::npos) break;
    }

    if(slen == 1) return num;

    if(pos < slen-1) {
        num += romanToInt(s.substr(pos+1, slen));
    }
    if(pos > 0) {
        num -= romanToInt(s.substr(0, pos));
    }

    return num;
}

#endif //TESTCODE_SOLUTION13_H
