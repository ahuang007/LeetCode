//
// Author: huanglijun 
// Date  : 2019/6/19
// Desc  : 29. Divide Two Integers
//

/*
Given two integers dividend and divisor, divide two integers without using multiplication, division and mod operator.

Return the quotient after dividing dividend by divisor.

The integer division should truncate toward zero.

Example 1:

Input: dividend = 10, divisor = 3
Output: 3
Example 2:

Input: dividend = 7, divisor = -3
Output: -2
Note:

Both dividend and divisor will be 32-bit signed integers.
The divisor will never be 0.
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 231 − 1 when the division result overflows.
 */



#ifndef TESTCODE_SOLUTION29_H
#define TESTCODE_SOLUTION29_H

int divide(int dividend, int divisor) {
    int num = 0;
    bool flag = true;
    if((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0))
        flag = false;

    if (divisor == 1) {
        return dividend;
    }
    if(divisor == -1){
        if(dividend == INT_MIN)
            return INT_MAX;
        else
            return flag ? abs(dividend) : -abs(dividend);
    }

    if (divisor == INT_MIN) {
        if (dividend == INT_MIN)
            return 1;
        else
            return 0;
    }
    divisor = abs(divisor);
    if (dividend == INT_MIN) {
        dividend += divisor;
        num++;
        dividend = abs(dividend);
    } else {
        dividend = abs(dividend);
    }
    int count = 0;
    while (dividend >= divisor) {
        long tmp = divisor;
        int pos = 0;
        for(int i = 0; i < 11; i++){
            tmp <<= 1;
            pos++;
            if(tmp > dividend){
                pos--;
                tmp >>= 1;
                break;
            }
        }
        dividend -= tmp;
        num += 1<<pos;
        count++;
    }
    return flag ? num : -num;
}

#endif //TESTCODE_SOLUTION29_H
