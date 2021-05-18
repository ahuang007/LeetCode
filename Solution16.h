//
// Author: huanglijun 
// Date  : 2019/8/2
// Desc  : 16. 3Sum Closest
//

/*
 * Given an array nums of n integers and an integer target, find three integers in nums such that the sum is closest to target. Return the sum of the three integers. You may assume that each input would have exactly one solution.

Example:

Given array nums = [-1, 2, 1, -4], and target = 1.

The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
 */

#ifndef TESTCODE_SOLUTION16_H
#define TESTCODE_SOLUTION16_H

int threeSumClosest(vector<int>& nums, int target) {
    int len = (int)nums.size();
    if(len < 3) return 0;

    int sum = 0;
    int res = nums[0]+nums[1]+nums[2]-target;
    sort(nums.begin(), nums.end());

    for(int i = 0; i < len-2; i++){
        if(i > 0 && nums[i] == nums[i-1]) continue;

        for(int j = i+1, k=len-1; j < k;){
            sum = nums[i]+nums[j]+nums[k];
            res = (abs(sum-target) < abs(res)) ? (sum-target) : res;
            if(sum == target){
                return sum;
            } else if(sum < target){
                j++;
            } else {
                k--;
            }
        }
    }

    return target+res;
}

#endif //TESTCODE_SOLUTION16_H
