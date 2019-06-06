//
// Author: huanglijun 
// Date  : 2019/6/6
// Desc  : Solution35
//

/*
* 35. Search Insert Position

Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Example 1:

Input: [1,3,5,6], 5
Output: 2
Example 2:

Input: [1,3,5,6], 2
Output: 1
Example 3:

Input: [1,3,5,6], 7
Output: 4
Example 4:

Input: [1,3,5,6], 0
Output: 0
 */

int searchInsert(vector<int>& nums, int target) {
    int num = 0;
    for(vector<int>::iterator iter = nums.begin(); iter != nums.end(); iter++){
        if(*iter < target){
            num++;
        } else {
            break;
        }
    }
    return num;
}

#ifndef TESTCODE_SOLUTION35_H
#define TESTCODE_SOLUTION35_H

#endif //TESTCODE_SOLUTION35_H
