
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        

        // Swap every (i,j) with (j,i)
        for (int i = 0 ; i < matrix.size() ; i++)
            for (int j = i+1 ; j < matrix[0].size() ; j++)
                swap(matrix[i][j],matrix[j][i]) ; // (0,0),(0,0)-(0,1)(1,0)
        
        
        
        for (int i = 0 ; i < matrix.size() ; i++){
            for (int j = 0 ; j < matrix[0].size() ; j++)
                cout << matrix[i][j] << " " ;
            cout <<  endl;
        }

        cout << "\n\n";
        // Reverses the order of elements 
        for (int i = 0; i < matrix.size(); i++) {
      
        for (int j = 0; j < matrix[i].size() / 2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][matrix[i].size() - 1 - j];
            matrix[i][matrix[i].size() - 1 - j] = temp;
        }
    }

        for (int i = 0 ; i < matrix.size() ; i++){
            for (int j = 0 ; j < matrix[0].size() ; j++)
                cout << matrix[i][j] << " " ;
            cout <<  endl;
        }

    }
};

int main (){
    Solution s ; 
    vector<vector<int>>v{{1,2,3 },{4,5,6},{7,8,9}};
    s.rotate(v) ;
    return 0;
}