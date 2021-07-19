// A C++ program for in-place conversion of Binary Tree to DLL
#include <iostream>
using namespace std;
 
/* A binary tree node has data, and left and right pointers */
struct node
{
    int data;
    node* left;
    node* right;
};

// A simple recursive function to convert a given Binary tree to Doubly
// Linked List
// root --> Root of Binary Tree
// head --> Pointer to head node of created doubly linked list
node * BinaryTree2DoubleLinkedList(node *root)
{
    if(!root)return root;
    BinaryTree2DoubleLinkedList(root->left);
    if(prev==NULL)
    {
      head=root;
    }
    else
    {
      root->left=prev;
      prev->right=root;
    }
    prev=root;
    BinaryTree2DoubleLinkedList(root->right);
    return head;
}
 
