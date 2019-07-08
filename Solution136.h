//
// Author: huanglijun 
// Date  : 2019/7/8
// Desc  : 136. Single Number
//

/*
Given a non-empty array of integers, every element appears twice except for one. Find that single one.

Note:

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Example 1:

Input: [2,2,1]
Output: 1

Example 2:

Input: [4,1,2,1,2]
Output: 4
 */

#ifndef TESTCODE_SOLUTION136_H
#define TESTCODE_SOLUTION136_H

// fixme: 有重复比较的 待优化
// 优化1： 先排序 然后可以不用重复比较

int singleNumber1(vector<int>& nums) {
    int len  = nums.size();
    if(len <= 0) return 0;
    if(len == 1) return nums[0];

    int num = 0;
    for(int i = 0; i < len; i++){
        bool exist = false;
        for(int j = 0; j < len; j++){
            if(j == i) continue;
            if(nums[i] == nums[j]){
                exist = true;
                break;
            }
        }
        if(exist){
            continue;
        } else {
            num = nums[i];
            break;
        }
    }
    return num;
}

int singleNumber(vector<int>& nums) {
    int len  = nums.size();
    if(len <= 0) return 0;
    if(len == 1) return nums[0];

    sort(nums.begin(), nums.end());

    int pos = 0;
    int tmpNum = 0;
    while(pos < len){
        tmpNum = nums[pos];

        bool flag = false;
        int i = pos+1;
        for(; i < len; i++){
            if(nums[i] == tmpNum){
                pos++;
                flag = true;
                continue;
            } else {
                break;
            }
        }

        if(!flag){
            return tmpNum;
        } else {
            pos++;
        }
    }

    return 0;
}

#endif //TESTCODE_SOLUTION136_H
