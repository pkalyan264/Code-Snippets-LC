#include<iostream>
using namespace std;
Node * PopulateNextRightPointers(Node * root)
{
  if(!root)return root;
  queue<Node *>q;
  q.push(root);
  while(!q.empty())
  {
    int m=q.size();
    for(int i=0;i<m;i++)
    {
      Node * curr=q.front();
      q.pop();
      if(i==m-1)
        curr->next=NULL;
      else curr->next=q.front();
      if(curr->left)q.push(curr->left);
      if(curr->right)q.push(curr->right);
    }
  }
  return root;
}
