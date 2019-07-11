//
// Author: huanglijun 
// Date  : 2019/7/11
// Desc  : 137. Single Number II
//

/*
 Given a non-empty array of integers, every element appears three times except for one, which appears exactly once. Find that single one.

Note:

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Example 1:

Input: [2,2,3,2]
Output: 3
Example 2:

Input: [0,1,0,1,0,1,99]
Output: 99
 */

#ifndef TESTCODE_SOLUTION137_H
#define TESTCODE_SOLUTION137_H

int singleNumber3(vector<int>& nums) {
    int len  = nums.size();
    if(len <= 0) return 0;
    if(len == 1) return nums[0];

    sort(nums.begin(), nums.end());

    int pos = 0;
    int tmpNum = 0;
    while(pos < len){
        tmpNum = nums[pos];
        int count = 1;
        int i = pos+1;
        for(; i < len; i++){
            if(nums[i] == tmpNum){
                pos++;
                count++;
                if(count >= 3){
                    break;
                } else {
                    continue;
                }
            } else {
                break;
            }
        }
        if(count >= 3){
            pos++;
        } else {
            return tmpNum;
        }
    }

    return 0;
}

#endif //TESTCODE_SOLUTION137_H
