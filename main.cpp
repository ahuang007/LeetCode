
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <set>

#include "Solution1.h"
#include "Solution2.h"
#include "Solution3.h"
#include "Solution4.h"
#include "Solution5.h"
#include "Solution6.h"
#include "Solution7.h"
#include "Solution8.h"
#include "Solution9.h"
#include "Solution10.h"
#include "Solution11.h"
#include "Solution12.h"
#include "Solution13.h"
#include "Solution14.h"
#include "Solution15.h"
#include "Solution16.h"
#include "Solution17.h"
#include "Solution18.h"
#include "Solution19.h"
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
    int n = (int)vt.size();
    for(int i = 0; i < n; i++)
        cout<<vt[i]<<" ";
    cout<<endl;
}

int main(){
    cout << "============ Test Start ============" << endl;
    
    //auto* ps18 = new Solution18();
    //vector<int> vec_int = { 1,0,-1,0,-2,2 };
    //vector<int> vec_int = { 2,2,2,2,2 };
    //vector<int> vec_int = { -5, 5, 4, -3, 0, 0, 4, -2 };
    //
    //auto vec_vec_int = ps18->fourSum(vec_int, 8);
    //for (auto& x : vec_vec_int) {
    //    PrintVector(x);
    //}

    cout << "============ Test End ============" << endl;

    return 0;
}
