#ifndef TESTCODE_SOLUTION1_H
#define TESTCODE_SOLUTION1_H

#include <iostream>
#include <vector>
using namespace std;

/*
1. Two Sum

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/

vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> vi;
	int size = nums.size();
	bool bResult = false;
	for(int i = 0; i < size-1; i++){
		for(int j = i+1 ; j < size; j++){
			if(nums[i] + nums[j] == target){
				vi.clear();
				vi.push_back(i);
				vi.push_back(j);
				bResult = true;
			}
		}
		if(bResult) break;
	}
	return vi;
}

#endif //TESTCODE_SOLUTION1_H
