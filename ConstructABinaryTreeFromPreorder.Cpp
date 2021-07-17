int search(vector<int>&inorder,int target,int start,int end)
    {
        for(int i=start;i<=end;i++)
        {
            if(inorder[i]==target) return i;
        }
        return -1;
    }
    TreeNode* helper(vector<int>&preorder,vector<int>&inorder,int start,int end,int &pre)
    {
        if(start>end)return NULL;
        int target=preorder[pre++];
        int index=search(inorder,target,start,end);
        TreeNode *temp=new TreeNode(inorder[index]);
        temp->left=helper(preorder,inorder,start,index-1,pre);
        temp->right=helper(preorder,inorder,index+1,end,pre);
        return temp;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        int pre=0;
        TreeNode * root=helper(preorder,inorder,0,preorder.size()-1,pre);
        return root;
    }
