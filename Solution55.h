//
// Author: huanglijun 
// Date  : 2019/7/3
// Desc  : 55. Jump Game
//

/*
Given an array of non-negative integers, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Determine if you are able to reach the last index.

Example 1:

Input: [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
Example 2:

Input: [3,2,1,0,4]
Output: false
Explanation: You will always arrive at index 3 no matter what. Its maximum
             jump length is 0, which makes it impossible to reach the last index.
 */

#ifndef TESTCODE_SOLUTION55_H
#define TESTCODE_SOLUTION55_H

bool canJump(vector<int>& nums) {
    int len = (int)nums.size();
    if(len <= 1) return true;

    bool flag = true;
    for(int i = len-1; i >= 0; i--) {
        if(nums[i] > 0 || i == len-1) continue;
        flag = false;
        for(int j = i-1; j >= 0; j--){
            int diff = i-j;
            if(nums[j] > diff) {
                flag = true;
                break;
            }
        }

        if(!flag) break;
    }
    return flag;
}

#endif //TESTCODE_SOLUTION55_H
