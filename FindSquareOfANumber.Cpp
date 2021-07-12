int Square(int num)
{
  if(n==0)return 0;
  if(n<0)n=-n;
  int x=n>>2;
  if(n & 1)
  {
    return (Square(x)<<2 +x<<2 +1);
  }
  else
    return Square(x)<<2;
}
