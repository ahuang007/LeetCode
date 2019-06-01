//
// Author: huanglijun 
// Date  : 2019/6/1
// Desc  : Solution15
//

#include <map>

/*
 * 15. 3Sum
 *
 * Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note:

The solution set must not contain duplicate triplets.

Example:

Given array nums = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]
 */

#ifndef TESTCODE_SOLUTION15_H
#define TESTCODE_SOLUTION15_H

vector< vector<int> > threeSum(vector<int>& nums) {
    vector<vector <int> > vtvtArr;

    map<int, int> num2count;
    for(vector<int>::iterator iter = nums.begin(); iter != nums.end(); iter++){
        num2count[*iter]++;
    }

    for(map<int, int>::iterator iter = num2count.begin(); iter != num2count.end(); iter++){
        int a = iter->first;
        if(a > 0) break;

        for(map<int, int>::iterator iter1 = iter; iter1 != num2count.end(); iter1++){
            int b = iter1->first;
            if(b > 0) break;
            if(b == a && num2count[a] <= 1) continue;
            if(INT_MAX+a+b<0) continue;
            int c = -(a+b);
            if(c == a && c == b && num2count[c] < 3) continue;

            if(num2count.find(c) != num2count.end()){
                vector<int> vtArr;
                vtArr.push_back(a);
                vtArr.push_back(b);
                vtArr.push_back(c);
                vtvtArr.push_back(vtArr);
            }
        }
    }

    for(map<int, int>::reverse_iterator iter = num2count.rbegin(); iter != num2count.rend(); iter++){
        int a = iter->first;
        if(a <= 0) break;

        for(map<int, int>::reverse_iterator iter1 = iter; iter1 != num2count.rend(); iter1++){
            int b = iter1->first;
            if(b <= 0) break;
            if(b == a && num2count[a] <= 1) continue;
            if(INT_MIN+a+b>0) continue;
            int c = -(a+b);
            if(c == a && c == b && num2count[c] < 3) continue;
            if(num2count[c] > 0){
                vector<int> vtArr;
                vtArr.push_back(a);
                vtArr.push_back(b);
                vtArr.push_back(c);
                vtvtArr.push_back(vtArr);
            }
        }
    }

    return vtvtArr;
}

#endif //TESTCODE_SOLUTION15_H
