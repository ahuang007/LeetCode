
#include <iostream>
#include <vector>
#include "Solution1.h"
#include "Solution3.h"
#include <string>
using namespace std;

int main(){
    cout << "Test Start" << endl;
    /*
    vector<int> vtArr;
    vtArr.push_back(0);
    vtArr.push_back(4);
    vtArr.push_back(3);
    vtArr.push_back(0);
    int target = 0;

    vector<int> vt2 = twoSum(vtArr, target);
    for(vector<int>::iterator iter = vt2.begin(); iter != vt2.end(); iter++){
        cout<<*iter<<endl;
    }
     */

    string str = "aaaabbcdfghi";
    cout<<lengthOfLongestSubstring(str)<<endl;

    cout << "Test End" << endl;

    return 0;
}
