/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>>ans;
        if(root==NULL)return ans;

        queue<TreeNode*>q;
        q.push(root);

        bool leftright=true;

        while(!q.empty()){
            vector<int>arr;
            TreeNode*curr=q.front();
            int sz=q.size();
            
            for(int i=0;i<sz;i++){
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
                arr.push_back(curr->val);
                q.pop();
                curr=q.front();
            }

            if(leftright)ans.push_back(arr);
            else{
                vector<int>a2;
                for(int i=arr.size()-1;i>=0;i--){
                    a2.push_back(arr[i]);
                }
                ans.push_back(a2);
            }
            leftright= !leftright;
            
        }
        return ans;
    }
};