Array:
int st[5];
int top=-1;
void push(int a)
{
  if(top==4)
  {
    cout<<"Stack Overflow";
  }
  else
  {
    top++;
    st[top]=a;
  }
}
void pop()
{
  if(top==-1)
  {
    cout<<"Stack Underflow";
  }
  else
  {
    top--;
  }
}
int top()
{
  return st[top];
}
bool isEmpty()
{
  if(top==-1)return true;
  return false;
}
int size()
{
  return top+1;
}




LinkedList Implementation:

Struct Node
{
  int val;
  Struct Node * next;
}
Struct Node * top;

void push(int a)
{
  Node * temp;
  temp = new Node ()
   temp->val=a;
  temp->next=top;
  top=temp;
}
bool isEmpty()
{
  return top==NULL;
}
int top()
{
  return top->val;
}
void pop()
{
  top=top->next;
}
