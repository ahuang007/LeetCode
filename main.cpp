
#include <iostream>
#include <vector>
#include "Solution1.h"
#include "Solution3.h"
#include "Solution6.h"
#include "Solution7.h"
#include "Solution8.h"
#include "Solution9.h"
#include <string>
using namespace std;

int main(){
    cout << "Test Start" << endl;

//    vector<int> vtArr;
//    vtArr.push_back(0);
//    vtArr.push_back(4);
//    vtArr.push_back(3);
//    vtArr.push_back(0);
//    int target = 0;
//    vector<int> vt2 = twoSum(vtArr, target);
//    for(vector<int>::iterator iter = vt2.begin(); iter != vt2.end(); iter++){
//        cout<<*iter<<endl;
//    }

//    string str = "aaaabbcdfghi";
//    cout<<lengthOfLongestSubstring(str)<<endl;

//    string str2 = "24 with";
//    cout<<myAtoi(str2)<<endl;

//    int x = 12321;
//    cout<<"Slution9 result: "<<isPalindrome(x)<<endl;

//    int x = 123;
//    cout<<reverse(x)<<endl;

    string str = "abcdefghij";
    cout<<convert(str, 4)<<endl;

    cout << "Test End" << endl;

    return 0;
}
