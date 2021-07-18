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
    bool helper(set<int>&st,TreeNode * root,int target)
    {
        if(!root)return false;
        if(st.find(target-root->val)==st.end())st.insert(root->val);
        else return true;
        bool b1=helper(st,root->left,target);
        bool b2=helper(st,root->right,target);
        return b1||b2;
        
    }
    bool findTarget(TreeNode* root, int k) 
    {
        set<int>s;
        return helper(s,root,k);
    }
};
