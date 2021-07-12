void push(int x)
{
  stack.push(x);
  if(ss.size()==0 or ss.top()>=x)
    ss.push(x);
}
int pop()
{
  int top=stack.top();
  if(top==ss.top())
  {
    ss.pop();
  }
  stack.pop();
  return top();
}
int getmin()
{
  if(ss.size()==0)return -1;
  return ss.top();
}
