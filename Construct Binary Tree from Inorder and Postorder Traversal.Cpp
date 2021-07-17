int search(vector<int>inorder,int start,int end,int target)
    {
        for(int i=start;i<=end;i++)
        {
            if(inorder[i]==target)
            {
                return i;
            }
            
        }
        return -1;
    }
    TreeNode *build(vector<int>inorder,vector<int>postorder,int &post,int start,int end)
    {
        if(start>end)return NULL;
        int target=postorder[post--];
        int index=search(inorder,start,end,target);
        TreeNode* temp=new TreeNode(inorder[index]);
        temp->right=build(inorder,postorder,post,index+1,end);
        temp->left=build(inorder,postorder,post,start,index-1);
        return temp;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
    {
        int post=postorder.size()-1;
        TreeNode*root=build(inorder,postorder,post,0,postorder.size()-1);
        return root;
    }
