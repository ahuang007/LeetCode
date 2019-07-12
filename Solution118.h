//
// Author: huanglijun 
// Date  : 2019/7/12
// Desc  : 118. Pascal's Triangle
//

#ifndef TESTCODE_SOLUTION118_H
#define TESTCODE_SOLUTION118_H

/*
 * Given a non-negative integer numRows, generate the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it.

Example:

Input: 5
Output:
[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]
 */

vector< vector<int> > generate(int numRows) {
    vector< vector<int> > vvArr;
    if(numRows <= 0) return vvArr;
    int count = 0;
    while(true){
        count++;
        vector<int> vtArr;
        if(count == 1){
            vtArr.push_back(1);
        } else if(count == 2) {
            vtArr.push_back(1);
            vtArr.push_back(1);
        } else {
            vtArr.push_back(1);
            for(int i = 0; i < count-2; i++){
                vtArr.push_back(vvArr[count-2][i] + vvArr[count-2][i+1]);
            }
            vtArr.push_back(1);
        }
        vvArr.push_back(vtArr);

        if(count >= numRows) break;
    }

    return vvArr;
}

#endif //TESTCODE_SOLUTION118_H
