
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) {
            return 0;
        }
        
        int min_price = prices[0];
        int max_profit = 0;
        
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < min_price) {
                min_price = prices[i];
            } else if (prices[i] - min_price > max_profit) {
                max_profit = prices[i] - min_price;
            }
        }
        
        return max_profit;
    }
};

int main(){
    vector<int>nums{15,14,13,1,3} ; 
    vector<int>nums2{17,10,15,1,16,4} ; 
    Solution s; 

    cout << s.maxProfit(nums2) ;
    return 0 ;
}