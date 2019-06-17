//
// Author: huanglijun 
// Date  : 2019/6/15
// Desc  : 70. Climbing Stairs
//

/*
You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Note: Given n will be a positive integer.

Example 1:

Input: 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
 */

#ifndef TESTCODE_SOLUTION70_H
#define TESTCODE_SOLUTION70_H

int climbStairs(int n) {
    if(n <= 0) return 0;
    int cs[n+1];
    cs[0] = 1;
    cs[1] = 2;
    for (int i = 2; i < n; i++) {
        cs[i] = cs[i-1] + cs[i-2];
    }
    return cs[n-1];
}

#endif //TESTCODE_SOLUTION70_H
