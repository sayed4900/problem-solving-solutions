#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void findClosestValue (vector<pair<int,string>>&values , int target,string &res){
        if (target <= 0 )
            return ; 
        int closetValue = INT_MAX; 
        
        int idx ;
        for (int i = 0 ; i < values.size() ; i++){
            int mnValuePossible = target- values[i].first  ; // mv= 1 - 5 
            // 
            if (mnValuePossible >= 0&& mnValuePossible < closetValue ){
                closetValue = mnValuePossible ; 
                idx = i ; 
            }
        }
        res+=values[idx].second;
        target-=values[idx].first;
        
        findClosestValue(values,target,res) ;
        
    }
    string intToRoman(int num) {
        vector<pair<int,string>>values={{1,"I"},{4,"IV"},{5,"V"},{9,"IX"},{10,"X"},{40,"XL"},{50,"L"},{90,"XC"},{100,"C"},{400,"CD"},{500,"D"},{900,"CM"},{1000,"M"}} ;

        string res = ""; 
        findClosestValue(values,num,res);
        // cout << res;

        return res;
    }
};

int main(){
    cout << "START \n";
    Solution s; 
    cout << s.intToRoman(1994);
    
    return 0 ; 
}