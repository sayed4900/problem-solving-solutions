
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
class Solution {
public:
    
    vector<int> largestValues(TreeNode* root) {
        if (!root) return {};
        queue<TreeNode*>q;
        vector<int>ans;
        int mx = INT_MIN;
        q.push(root);
        // BFS Algorithm
        while (!q.empty()){
            int last_size_queue=q.size();

            while(last_size_queue--){
                TreeNode * cur = q.front();
                q.pop();
                mx = max(mx,cur->val) ;
                if (cur->left)
                    q.push(cur->left) ;
                if (cur->right)
                    q.push(cur->right);
            }
            ans.push_back(mx) ; 
            mx=INT_MIN;
        }
        return ans;
    }
};

int main(){

    return 0;
}