
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

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
#include "Solution16.h"
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
#include "Solution91.h"
#include "Solution118.h"
#include "Solution125.h"
#include "Solution130.h"
#include "Solution136.h"
#include "Solution137.h"
#include "Solution146.h"
#include "Solution191.h"
#include "Solution326.h"
#include "Solution342.h"
#include "Solution343.h"
#include "Solution344.h"
#include "Solution345.h"

using namespace std;

template <typename T>
void InitVecotr(vector<T> &vt, T arr[], int n){
    for(int i = 0; i < n; i++){
        vt.push_back(arr[i]);
    }
}

template<typename T>
void PrintVector(vector<T>& vt){
    int n = vt.size();
    for(int i = 0; i < n; i++)
        cout<<vt[i]<<" ";
    cout<<endl;
}

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

//    generate(8);

//    int a[] = {4,2,1,2,1,2,1};
//    vector<int> vtArr;
//    for(int i = 0; i < sizeof(a)/sizeof(int); i++){
//        vtArr.push_back(a[i]);
//    }

//    nextPermutation(vtArr);
//
//    cout<<canJump(vtArr)<<endl;

//    cout<<singleNumber(vtArr)<<endl;

//    cout<<singleNumber3(vtArr)<<endl;

//    for(int i = 0; i < vtArr.size(); i++){
//        cout<<vtArr[i]<<" ";
//    }
//    cout<<endl;

/* // test 130
    char cArr[16] = {
            'x', 'x', 'x', 'x',
            'x', 'o', 'x', 'x',
            'x', 'x', 'x', 'x',
            'x', 'o', 'x', 'x'};
    vector< vector<char> > board;
    for(int i = 0; i < 4; i++){
        vector<char> vtChar;
        for(int j = 0; j < 4; j++){
            vtChar.push_back(cArr[i*4+j]);
        }
        board.push_back(vtChar);
    }

    PrintBoard(board);

    solve(board);

    PrintBoard(board);
*/

//    cout<<isPowerOfFour(16)<<endl;

//    char cArr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//    vector<char> vt;
//    InitVecotr(vt, cArr, sizeof(cArr)/sizeof(char));
//    reverseString(vt);
//    PrintVector(vt);

//    cout<<reverseVowels("gateio")<<endl;

//    for(int i = 2; i <= 58; i++){
//        cout<<integerBreak_timeout(i)<<endl;
//    }

//    cout<<isPowerOfThree(30)<<endl;

//    cout<<numDecodings("75432296747153962183683253641632942588269337649941513957271785463198441999")<<endl;

    //int arr[4] = {-1,2,1,-4};
    //vector<int> vt;
    //InitVecotr(vt, arr, 4);
    //cout<<threeSumClosest(vt, 1)<<endl;

    //uint32_t a = 7;
    //cout << hammingWeight(a) << endl;
    
    int capacity = 2;
    LRUCache* pCache = new LRUCache(capacity);

    pCache->put(1, 1);
    pCache->put(2, 2);
    cout << pCache->get(1) << endl;

    pCache->put(3, 3);
    cout << pCache->get(2) << endl;
    pCache->put(4, 4);
    cout << pCache->get(1) << endl;;
    cout << pCache->get(3) << endl;;
    cout << pCache->get(4) << endl;;

    cout << "Test End" << endl;

    return 0;
}
