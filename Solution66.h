//
// Author: huanglijun 
// Date  : 2019/6/15
// Desc  : 66. Plus One
//

/*
Given a non-empty array of digits representing a non-negative integer, plus one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.

Example 1:

Input: [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Example 2:

Input: [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
 */

vector<int> plusOne(vector<int>& digits) {
    int len = digits.size();
    for(int i = len-1; i >= 0; i--){
        if(i == len - 1){
            digits[i]++;
        }

        if(digits[i] >= 10){
            digits[i] -= 10;
            if( i > 0){
                digits[i-1]++;
            } else {
                digits.insert(digits.begin(), 1);
            }
        } else {
            break;
        }
    }
    return digits;
}

#ifndef TESTCODE_SOLUTION66_H
#define TESTCODE_SOLUTION66_H

#endif //TESTCODE_SOLUTION66_H
