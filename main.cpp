
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
#include "Solution20.h"
#include "Solution26.h"
#include "Solution27.h"
#include "Solution28.h"
#include "Solution29.h"
#include "Solution31.h"
#include "Solution35.h"
#include "Solution38.h"
#include "Solution50.h"
#include "Solution55.h"
#include "Solution58.h"
#include "Solution60.h"
#include "Solution66.h"
#include "Solution67.h"
#include "Solution69.h"
#include "Solution70.h"
#include "Solution118.h"
#include "Solution125.h"
#include "Solution136.h"
#include "Solution137.h"

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

//    threeSum(vtArr);

//    string str = "{[]}";
//    cout<<isValid(str)<<endl;

//    cout<<countAndSay(4)<<endl;

//    cout<<searchInsert(vtArr, 6)<<endl;

//    cout<<removeDuplicates(vtArr)<<endl;

//    cout<<removeElement(vtArr, 1)<<endl;

//    cout<<strStr("zhangsan", "ang")<<endl;

//    cout<<lengthOfLastWord("a b cccc ")<<endl;

//    plusOne(vtArr);

//    cout<<addBinary("101", "111")<<endl;

//    cout<<mySqrt(2)<<endl;

//    cout<<climbStairs(10)<<endl;

//    cout<<divide(-2147483648, -2)<<endl;

//    cout<<getPermutation(4, 9)<<endl;

//    cout<<isPalindrome("0p")<<endl;

    generate(8);

    int a[] = {4,2,1,2,1,2,1};
    vector<int> vtArr;
    for(int i = 0; i < sizeof(a)/sizeof(int); i++){
        vtArr.push_back(a[i]);
    }

//    nextPermutation(vtArr);
//
//    cout<<canJump(vtArr)<<endl;

//    cout<<singleNumber(vtArr)<<endl;

    cout<<singleNumber3(vtArr)<<endl;

//    for(int i = 0; i < vtArr.size(); i++){
//        cout<<vtArr[i]<<" ";
//    }
//    cout<<endl;

    cout << "Test End" << endl;

    return 0;
}
