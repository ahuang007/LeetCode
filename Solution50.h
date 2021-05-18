//
// Author: huanglijun 
// Date  : 2019/5/24
// Desc  : Solution50
//

#ifndef TESTCODE_SOLUTION50_H
#define TESTCODE_SOLUTION50_H

/*

50. Pow(x, n)

Implement pow(x, n), which calculates x raised to the power n (xn).

Example 1:

Input: 2.00000, 10
Output: 1024.00000
Example 2:

Input: 2.10000, 3
Output: 9.26100
Example 3:

Input: 2.00000, -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25
Note:

-100.0 < x < 100.0
n is a 32-bit signed integer, within the range [−231, 231 − 1]
 */

double myPow(double x, int n) {
    if(n == 0) return 1;
    double y = 1.00;

    if(x == 1.00) return x;
    if(x == -1.00) return n%2==0 ? 1.00 : -1.00;

    if(n > 0) {
        for (int i = 0; i < n; i++) {
            y *= x;
            if ((y == 1.00 && x == 1.00) || y == 0.00)
                break;
        }
    } else {
        x = 1/x;
        for (int i = n; i < 0; i++) {
            y *= x;
            if ((y == 1.00 && x == 1.00) || y == 0.00)
                break;
        }
    }

    return y;
}

#endif //TESTCODE_SOLUTION50_H
