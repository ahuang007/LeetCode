//
// Author: huanglijun 
// Date  : 2019/7/22
// Desc  : 342. Power of Four
//

#ifndef TESTCODE_SOLUTION342_H
#define TESTCODE_SOLUTION342_H

/*
 * Given an integer (signed 32 bits), write a function to check whether it is a power of 4.

Example 1:

Input: 16
Output: true
Example 2:

Input: 5
Output: false
 */

bool isPowerOfFour(int num) {
    if(num <= 0) return false;
    if(num == 1) return 1;

    int zeroCount = 0;
    int oneCout = 0;
    for(int i = 0; i < 31; i++){
        if((num&1) == 0) {
            zeroCount++;
            num >>= 1;
            if(num == 1) break;
        } else {
            oneCout++;
            if(oneCout > 1) return false;
        }
    }
    return zeroCount%2==0;
}

#endif //TESTCODE_SOLUTION342_H
