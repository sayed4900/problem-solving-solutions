#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

    int romanToInt(string s) {
        unordered_map<char, int> ump = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        s+=" ";
        int res = 0 ;
        for (int i = 0 ; i < s.size()-1 ; i++){
            if (ump[s[i]] < ump[s[i+1]])
                res-=ump[s[i]];
            else {
                res+=ump[s[i]] ;
            }
        }
       // if (s[s.size()-2] < s[s.size()-1] )
           // res+=ump[s[s.size()-1]];
        return res;
    }
};
int main() {
    Solution s ;
    cout << s.romanToInt("LVIII");
   
    return 0;
}
