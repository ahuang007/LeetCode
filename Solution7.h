//
// Author: huanglijun 
// Date  : 2019/5/23
// Desc  : LeetCode Solution7
//

#ifndef TESTCODE_SOLUTION7_H
#define TESTCODE_SOLUTION7_H

/*

7 Reverse Integer

Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21
 */

int reverse(int x) {
    if(x == INT_MIN) return 0;
    bool flag = x >= 0 ? true : false;
    if(!flag)
        x = -x;

    vector<int> vt;
    while(x > 0){
        if(x >= 10){
            int tmp = x%10;
            vt.push_back(tmp);

            x /= 10;
            if(x == 0){
                vt.push_back(tmp);
                break;
            }
        } else {
            vt.push_back(x);
            break;
        }
    }

    double num = 0;
    int vt_size = vt.size();

    for(int i = 0; i < vt_size; i++){
        cout<<vt[i]<<" "<<i<<endl;
        num += vt[i];
        if(num >= INT_MAX) return 0;
        if(i < vt_size-1) num *= 10;
    }

    num = flag ? num : -num;
    return (int)num;
}

#endif //TESTCODE_SOLUTION7_H
