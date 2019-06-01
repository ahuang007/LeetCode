
#include <iostream>
#include <vector>
#include <string>

#include "Solution1.h"
#include "Solution3.h"
#include "Solution5.h"
#include "Solution6.h"
#include "Solution7.h"
#include "Solution8.h"
#include "Solution9.h"
#include "Solution13.h"
#include "Solution14.h"
#include "Solution15.h"
#include "Solution50.h"

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

//    string str = "abcdefghij";
//    cout<<convert(str, 4)<<endl;

//    cout<<myPow(2.000, 10)<<endl;

//    cout<<longestPalindrome("abcba")<<endl;

//    cout<<romanToInt("MCMXCIV")<<endl;

//    vector<string> vtStr;
//    vtStr.push_back("abcv");
//    vtStr.push_back("abcd");
//    vtStr.push_back("abcx");
//    vtStr.push_back("abdf");
//    vtStr.push_back("abx");
//    vtStr.push_back("c");
//    cout<<longestCommonPrefix(vtStr)<<endl;

    //int a[9] = {-1, 0, -1, 1, 2, -4, 0, -2, 1};
    int a[] = {-1, 0, 1};
    vector<int> vtArr;
    for(int i = 0; i < sizeof(a)/sizeof(int); i++){
        vtArr.push_back(a[i]);
    }
    threeSum(vtArr);

    cout << "Test End" << endl;

    return 0;
}
