//
// Author: huanglijun 
// Date  : 2019/5/24
// Desc  : Solution6
//

#ifndef TESTCODE_SOLUTION6_H
#define TESTCODE_SOLUTION6_H

/*

6. ZigZag Conversion

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);
Example 1:

Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
Example 2:

Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:

P     I    N
A   L S  I G
Y A   H R
P     I
 */

string convert(string s, int numRows) {
    int slen = (int)s.size();
    if(numRows <= 1 || numRows >= slen) return s;

    vector<char> vtChars;
    int Unit = 2*numRows-2;
    for(int i = 0; i < slen; i++){
        int pos = i%Unit;
        if(pos >= 0 && pos <= numRows-1){
            vtChars.push_back(s[i]);
            if(i == slen-1){
                for(int j = 0; j < numRows-1-pos; j++){
                    vtChars.push_back(' ');
                }
            }
        } else {
            for(int j = 0; j < numRows; j++){
                if(j == Unit-pos){
                    vtChars.push_back(s[i]);
                } else {
                    vtChars.push_back(' ');
                }
            }
        }
    }

    int col = (int)(vtChars.size()/numRows);
    string rStr = "";

    for(int i = 0; i < numRows; i++){
        for(int j = 0; j < col; j++){
            int pos = j*numRows+i;
            char c = vtChars[pos];
            if(c != ' '){
                rStr += c;
            }
        }
    }

    return rStr;
}


#endif //TESTCODE_SOLUTION6_H
