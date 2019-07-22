//
// Author: huanglijun 
// Date  : 2019/7/15
// Desc  : 130. Surrounded Regions
//

/*
 * Given a 2D board containing 'X' and 'O' (the letter O), capture all regions surrounded by 'X'.

A region is captured by flipping all 'O's into 'X's in that surrounded region.

Example:

X X X X
X O O X
X X O X
X O X X
After running your function, the board should be:

X X X X
X X X X
X X X X
X O X X
Explanation:

Surrounded regions shouldn’t be on the border, which means that any 'O' on the border of the board are not flipped to 'X'. Any 'O' that is not on the border and it is not connected to an 'O' on the border will be flipped to 'X'. Two cells are connected if they are adjacent cells connected horizontally or vertically.
 */

#ifndef TESTCODE_SOLUTION130_H
#define TESTCODE_SOLUTION130_H

void solve(vector< vector<char> >& board) {

}

void PrintBoard(vector< vector<char> >& board){
    int m = board.size();
    for(int i = 0; i < m; i++){
        int n = board[i].size();
        for(int j = 0; j < n; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

#endif //TESTCODE_SOLUTION130_H
