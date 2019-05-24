
#ifndef TESTCODE_SOLUTION9_H
#define TESTCODE_SOLUTION9_H

#include <vector>
using namespace std;
/*

9 Palindrome Number

Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Example 1:

Input: 121
Output: true
Example 2:

Input: -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 */

/*
int get_length(int x) {
    int leng = 0;
    while (x) {
        x /= 10;
        leng++;
    }
    return leng;
}
*/

bool isPalindrome(int x) {
    if(x < 0) return false;

    vector<int> vt;
    while(x > 0){
        if(x >= 10){
            int tmp = x%10;
            vt.push_back(tmp);

            x /= 10;
            if(x == 0){
                vt.push_back(tmp);
                break;
            }
        } else {
            vt.push_back(x);
            break;
        }
    }

    int vt_size = vt.size();
    for(int i = 0; i < vt_size/2; i++){
        if(vt[i] != vt[vt_size-1-i])
            return false;
    }

    return true;
}

#endif //TESTCODE_SOLUTION9_H
