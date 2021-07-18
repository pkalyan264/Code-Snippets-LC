class BSTIterator {
    stack<TreeNode *> s;
    
    void leftmost_node(TreeNode* root){
        while(root){
            s.push(root);
            root=root->left;
        }
    }
public:
    
    BSTIterator(TreeNode* root) {
        //s.clear();
        leftmost_node(root);
    }
    
    int next() {
        TreeNode* top=s.top();
        s.pop();
        if(top->right)
            leftmost_node(top->right);        
        return top->val;
    }
    
    bool hasNext() {
        return s.size()>0;
    }
};
