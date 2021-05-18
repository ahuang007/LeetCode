//
// Author: huanglijun 
// Date  : 2019/7/5
// Desc  : 60. Permutation Sequence
//

/*
 * The set [1,2,3,...,n] contains a total of n! unique permutations.

By listing and labeling all of the permutations in order, we get the following sequence for n = 3:

"123"
"132"
"213"
"231"
"312"
"321"
Given n and k, return the kth permutation sequence.

Note:

Given n will be between 1 and 9 inclusive.
Given k will be between 1 and n! inclusive.
Example 1:

Input: n = 3, k = 3
Output: "213"
Example 2:

Input: n = 4, k = 9
Output: "2314"
 */

#ifndef TESTCODE_SOLUTION60_H
#define TESTCODE_SOLUTION60_H

string getPermutation(int n, int k) {
    int maxCount = 1;
    for(int i = 1; i <= n; i++){
        maxCount *= n;
    }
    if(k > maxCount) k %= maxCount;

    vector<int> nums;
    for(int i = 1; i <= n; i++){
        nums.push_back(i);
    }

    int count = 1;
	// fixme: 目前是调用Solution38中的getNextPermutation方法 待优化
    while(count < k){
        for (int i = n - 1; i >= 0; i--) {
            bool flag = false;
            for (int j = n - 1; j > i; j--) {
                if (nums[j] > nums[i]) {
                    swap(nums[i], nums[j]);
                    sort(nums.begin() + i + 1, nums.end());
                    count++;
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
    }

    stringstream str;
    for(int i=0; i<n; i++){
        str<<nums[i];
    }

    return str.str();
}

#endif //TESTCODE_SOLUTION60_H
