//
// Author: huanglijun 
// Date  : 2019/7/24
// Desc  : 343. Integer Break
//

/*
 * Given a positive integer n, break it into the sum of at least two positive integers and maximize the product of those integers. Return the maximum product you can get.

Example 1:

Input: 2
Output: 1
Explanation: 2 = 1 + 1, 1 × 1 = 1.
Example 2:

Input: 10
Output: 36
Explanation: 10 = 3 + 3 + 4, 3 × 3 × 4 = 36.
Note: You may assume that n is not less than 2 and not larger than 58.
 */

#ifndef TESTCODE_SOLUTION343_H
#define TESTCODE_SOLUTION343_H


// 查表法：空间换时间
int integerBreak(int n) {
    if(n < 2 || n > 58) return 0;

    map<int, int> mp;
    mp[2] = 1;
    mp[3] = 2;
    mp[4] = 4;
    mp[5] = 6;
    mp[6] = 9;
    mp[7] = 12;
    mp[8] = 18;
    mp[9] = 27;
    mp[10] = 36;
    mp[11] = 54;
    mp[12] = 81;
    mp[13] = 108;
    mp[14] = 162;
    mp[15] = 243;
    mp[16] = 324;
    mp[17] = 486;
    mp[18] = 729;
    mp[19] = 972;
    mp[20] = 1458;
    mp[21] = 2187;
    mp[22] = 2916;
    mp[23] = 4374;
    mp[24] = 6561;
    mp[25] = 8748;
    mp[26] = 13122;
    mp[27] = 19683;
    mp[28] = 26244;
    mp[29] = 39366;
    mp[30] = 59049;
    mp[31] = 78732;
    mp[32] = 118098;
    mp[33] = 177147;
    mp[34] = 236196;
    mp[35] = 354294;
    mp[36] = 531441;
    mp[37] = 708588;
    mp[38] = 1062882;
    mp[39] = 1594323;
    mp[40] = 2125764;
    mp[41] = 3188646;
    mp[42] = 4782969;
    mp[43] = 6377292;
    mp[44] = 9565938;
    mp[45] = 14348907;
    mp[46] = 19131876;
    mp[47] = 28697814;
    mp[48] = 43046721;
    mp[49] = 57395628;
    mp[50] = 86093442;
    mp[51] = 129140163;
    mp[52] = 172186884;
    mp[53] = 258280326;
    mp[54] = 387420489;
    mp[55] = 516560652;
    mp[56] = 774840978;
    mp[57] = 1162261467;
    mp[58] = 1549681956;

    return mp[n];
}

// 此方法是用递归法计算的 本身也是符合需求的 只是比查表法慢
int integerBreak_timeout(int n) {
    if(n < 2 || n > 58) return 0;

    static map<int, int> mp;
    mp[2] = 1;
    mp[3] = 2;
    mp[4] = 4;

    if(mp.find(n) != mp.end()){
        return mp[n];
    }

    int max = n;
    for(int i = 2; i <= n/2; i++){
        int j = n-i;
        if(j >= i) {
            int a = i <= 4 ? i : integerBreak(i);
            int b = j <= 4 ? j : integerBreak(j);
            int tmp = a * b;
            if (tmp > max) {
                max = tmp;
            }
        } else {
            break;
        }
    }

    mp[n] = max;
    return max;
}

#endif //TESTCODE_SOLUTION343_H
