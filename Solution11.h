#pragma once
/*
* 11. Container With Most Water
* You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

Example 1:

Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
Example 2:

Input: height = [1,1]
Output: 1

Constraints:

n == height.length
2 <= n <= 105
0 <= height[i] <= 104
*/

#include<vector>
using std::vector;

class Solution11 {
public:
    int maxArea(vector<int>& height) {
        int sz = (int)height.size();
        if (sz < 2) {
            return 0;
        }

        int maxArea = 0;
        int area = 0;
        
        int maxi = 0;
        for (int i = 0; i < sz-1; i++) {
            if (height[i] < height[maxi]) {
                continue;
            } else {
                maxi = i;
            }

            int maxj = sz-1;
            for (int j = sz-1; j > i; j--) {
                if (height[j] < height[maxj]) {
                    continue;
                } else {
                    maxj = j;
                }

                area = min(height[j], height[i]) * (j-i);
                if (area > maxArea) {
                    maxArea = area;
                }
            }
        }

        return maxArea;
    }

    int maxArea1(vector<int>& height) {
        int ret = 0;
        int temp;
        for (int i = 0, j = (int)height.size() - 1; i < j;) {
            temp = min(height[i], height[j]) * (j - i);
            ret = ret > temp ? ret : temp;
            if (height[i] > height[j]) {
                j--;
            } else {
                i++;
            }
        }
        return ret;
    }
};
