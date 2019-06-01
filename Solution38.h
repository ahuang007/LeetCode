//
// Author: huanglijun 
// Date  : 2019/6/1
// Desc  : Solution38
//

/*
 * 38. Count and Say
 * The count-and-say sequence is the sequence of integers with the first five terms as following:

1.     1
2.     11
3.     21
4.     1211
5.     111221
1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.

Given an integer n where 1 ≤ n ≤ 30, generate the nth term of the count-and-say sequence.

Note: Each term of the sequence of integers will be represented as a string.



Example 1:

Input: 1
Output: "1"
Example 2:

Input: 4
Output: "1211"
 */

#include <string>

string countAndSay(int n) {
    if(n <= 0) return "";
    if(n == 1) return "1";

    string str = "1";
    for(int i = 2; i <= n; i++){
        int slen = str.size();
        string newStr = "";
        int count = 0;
        char c = str[0];
        int num = 0;
        while(count < slen){
            if(str[count] == c){
                num++;
            } else {
                newStr += std::to_string(num); // 需要支持c++11
                newStr += c;
                c = str[count];
                num = 1;
            }
            count++;
        }
        if(count == slen){
            newStr += std::to_string(num); // 需要支持c++11
            newStr += c;
        }
        str = newStr;

        //cout<<"i:"<<i<<" ---- str: "<<str<<" => newStr:"<<newStr<<endl;
    }
    return str;
}

#ifndef TESTCODE_SOLUTION38_H
#define TESTCODE_SOLUTION38_H

#endif //TESTCODE_SOLUTION38_H
