//
// Author: huanglijun 
// Date  : 2019/6/15
// Desc  : 69. Sqrt(x)
//

/*
Implement int sqrt(int x).

Compute and return the square root of x, where x is guaranteed to be a non-negative integer.

Since the return type is an integer, the decimal digits are truncated and only the integer part of the result is returned.

Example 1:

Input: 4
Output: 2
Example 2:

Input: 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since
             the decimal part is truncated, 2 is returned.
 */

int mySqrt(int x) {
    if(x == 0) return 0;
    if(x >= 1 && x < 4) return 1;

    int begin   = 1;
    int end     = x/2 +1;
    int mid     = 0;
    while(true){
        mid = (begin + end)/2;
        if(mid == begin || mid == end) break;
        double p = 1.0 * mid * mid;
        if(p < x){
            begin = mid;
        } else if (p > x) {
            end = mid;
        } else {
            break;
        };
    }

    if(mid == begin){
        double pe = 1.0*end*end;
        if(pe == x) return end;
    }
    return mid;
}

#ifndef TESTCODE_SOLUTION69_H
#define TESTCODE_SOLUTION69_H

#endif //TESTCODE_SOLUTION69_H
