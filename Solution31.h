//
// Author: huanglijun 
// Date  : 2019/6/21
// Desc  : 31. Next Permutation
//

/*
Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order).

The replacement must be in-place and use only constant extra memory.

Here are some examples. Inputs are in the left-hand column and its corresponding outputs are in the right-hand column.

1,2,3 → 1,3,2
3,2,1 → 1,2,3
1,1,5 → 1,5,1
 */

/*
    从后往前遍历数组，找到当前节点右侧第一个比当前节点大的数，交换他们，然后使当前右侧有序即可。
    假设数组nums长度为n（从0开始编号），数组中nums[i]到第nums[n-1]逆序（降序排列），且nums[i-1]<nums[i]，
    则下一个全排列时只需要考虑nums[i-1]到nums[n-1]即可，在i-1 右侧找到第一个大于nums[i-1] 的数，交换他们顺序，
    则后面升序排列就是最小的数，即下一个全排列
 */

#ifndef TESTCODE_SOLUTION31_H
#define TESTCODE_SOLUTION31_H

void nextPermutation(vector<int>& nums) {
    int  vlen = (int)nums.size();
    if(vlen <= 1) return;

    for(int i = vlen-1; i >= 0; i--){
        for(int j = vlen-1; j > i; j--){
            if(nums[j] > nums[i]){
                swap(nums[i], nums[j]);
                sort(nums.begin()+i+1, nums.end());
                return;
            }
        }
    }
    reverse(nums.begin(), nums.end());
}

#endif //TESTCODE_SOLUTION31_H
