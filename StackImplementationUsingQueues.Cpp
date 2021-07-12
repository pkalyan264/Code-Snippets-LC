// Using 2 Queues:
// Make push Operaation costly; TC O(N) Space O(N)
#include<iostream>
using namespace std;
queue<int>q1,q2;
void push(int a)
{
  q2.push(a);
  while(!q1.empty())
  {
    q2.push(q1.top());
    q1.pop();
  }
  swap(q1,q2);
}
void pop()
{
  q1.pop();
}
int top()
{
  return q1.front();
}



// Implement Stack Using Single Queue:
// TC O(N) SC O(N)
queue<int>q1;
void push(int a)
{
  q1.push(a);
  for(int i=0;i<q1.size()-1;i++)
  {
    q1.push(q1.front());
    q1.pop();
  }
}
void pop()
{
  q1.pop();
}
int top()
{
  return q1.front();
}
