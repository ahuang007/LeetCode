//
// Author: huanglijun 
// Date  : 2019/6/1
// Desc  :
//

/*
 * 20. Valid Parentheses
 * Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.

Example 1:

Input: "()"
Output: true
Example 2:

Input: "()[]{}"
Output: true
Example 3:

Input: "(]"
Output: false
Example 4:

Input: "([)]"
Output: false
Example 5:

Input: "{[]}"
Output: true
 */

bool isValid(string s) {
    int slen = s.size();
    if(slen <= 0){
        return true;
    } else if(slen%2 != 0){
        return false;
    } else {
        bool match = false;
        for(int i = 0; i< slen-1; i++){
            if((s[i] == '(' && s[i+1] == ')') || (s[i] == '[' && s[i+1] == ']') || (s[i] == '{' && s[i+1] == '}')){
                match = true;
                s.erase(i, 2);
                return isValid(s);
            }
        }
        if(!match) return false;
    }
    return true;
}


#ifndef TESTCODE_SOLUTION20_H
#define TESTCODE_SOLUTION20_H

#endif //TESTCODE_SOLUTION20_H
