#pragma once
/*
* 18. 4Sum
* Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.

Example 1:

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
Example 2:

Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]

Constraints:

1 <= nums.length <= 200
-109 <= nums[i] <= 109
-109 <= target <= 109
*/

class Solution18 {
public:
    // 参考Solution15的三个数算法 见 fourSum1
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set< vector<int> > set_vec_i;
        sort(nums.begin(), nums.end());
        int sz = (int)nums.size();
        int remain = 0;
        int m = 0;
        int n = 0;
        if (sz >= 4) {
            for (int i = 0; i < sz - 3; i++) {
                for (int j = i + 1; j < sz -2; j++) {
                    remain = target - (nums[i] + nums[j]);
                    m = j + 1;
                    n = sz - 1;
                    while (m < n) {
                        if (nums[m] + nums[n] == remain) {
                            vector<int> vec_i = { nums[i], nums[j], nums[m], nums[n] };
                            set_vec_i.insert(vec_i);

                            while (m < n && nums[m + 1] == nums[m]) {
                                ++m;
                            }

                            while (m < n && nums[n - 1] == nums[n]) {
                                --n;
                            }

                            ++m;
                            --n;
                        } else if (nums[m] + nums[n] < remain) {
                            ++m;
                        } else {
                            --n;
                        }
                    }
                }
            }
        }

        return vector<vector<int>>(set_vec_i.begin(), set_vec_i.end());
    }
};
