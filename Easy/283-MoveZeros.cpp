
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

 
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nextNonZero = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[nextNonZero], nums[i]);
                nextNonZero++;
            }
            // else{
            //     cout << nextNonZero  << endl;
            // }
        }
        // for (int i =  0 ; i < nums.size() ; i++)
        //     cout << nums[i] << " " ;
    }
};

int main (){
    vector<int>v {1,2,3,0,4,5,6,7,0,8,9,10} ;
    Solution s ; 
    s.moveZeroes(v);
    return 0;
}