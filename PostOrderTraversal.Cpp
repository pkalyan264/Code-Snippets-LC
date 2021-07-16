vector<int> postorderTraversal(TreeNode* root) 
    {
        vector<int>ans;
	    stack<TreeNode *>st;
        if(!root)return ans;
        TreeNode * last=NULL;
        while(root||!st.empty())
        {
            if(root)
            {
                st.push(root);
                root=root->left;
            }
            else
            {
                TreeNode * t=st.top();
                if(t->right and last!=t->right)
                    root=t->right;
                else
                {
                    ans.push_back(t->val);
                    last=t;
                    st.pop();
                }
            }
        }
    
        return ans;
    }
