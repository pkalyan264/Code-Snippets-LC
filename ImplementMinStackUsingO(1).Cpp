#include<iostream>
using namespace std;
class MinStack
{
}
stack<int>st;
int mini=INT_MAX;
void push(int val)
{
  if(val<=mini)
  {
    st.push(mini);
    mini=val;
  }
  st.push(val);
}
void pop()
{
  if(st.top()==mini)
  {
    st.pop();
    mini=st.top();
  }
  st.pop();
}
int top()
{
  return st.top();
}
int getMin()
{
  return mini;
}
