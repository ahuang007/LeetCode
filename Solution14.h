//
// Author: huanglijun 
// Date  : 2019/5/27
// Desc  : 
//

#ifndef TESTCODE_SOLUTION14_H
#define TESTCODE_SOLUTION14_H

/*

14. Longest Common Prefix

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
Note:

All given inputs are in lowercase letters a-z.
 */

string longestCommonPrefix(vector<string>& strs) {
    string retStr = "";
    int num = 0;
    while(true){
        bool flag = true;
        char c = '0';
        for(vector<string>::iterator iter = strs.begin(); iter != strs.end(); iter++){
            if(iter->size() < num + 1){
                flag = false;
                break;
            } else {
                if(c == '0'){
                    c = (*iter)[num];
                } else {
                    if(c != (*iter)[num]){
                        flag = false;
                        break;
                    }
                }
            }
        }

        if(flag && c != '0'){
            num++;
            retStr += c;
        } else {
            break;
        }
    }

    return retStr;
}

#endif //TESTCODE_SOLUTION14_H
