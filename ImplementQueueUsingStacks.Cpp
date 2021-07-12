// Making Dequeue Operation Costly
srack<int>s1,s2;
void enqueue(int a)
{
  s1.push(a);
}
void dequeue()
{
  while(s1.empty())
  {
  s2.push(s1.top());
    s1.pop();
  }
  s2.pop();
  while(!s2.empty())
  {
    s1.push(s2.top());
    s2.pop();
  }
}
