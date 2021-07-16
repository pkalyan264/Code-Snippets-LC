#include<iostream>
using namespace std;
int Height(TreeNode * root)
{
  int height=0;
  if(!root)return height;
  return 1+ max(Height(root->left),Height(root->right));
}



// Iterative:
// Modify the level order traversal code to contain the number of times the for loop enters.
while(!q.empty())
{
  h++;
  int m=q.size();
  for(int i=0;i<m;i++)
  {TreeNode * temp=q.front();
  q.pop();
  if(temp->left)
    q.push(temp.left);
   if(temp->right)q.push(temp->right);
   }
}
return h;
