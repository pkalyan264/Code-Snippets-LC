int Divide(int dividend,int divisor)
{
  if(dividend==INT_MIN and divisor==1)return INT_MAX;
  long dvs=labs(divisor);
  long dvd=labs(dividend);
  long ans=0;
  int sign=dividend>0^divisor>0?-1:1;
  while(dvd>=dvs)
  {
    long temp=dvs;
    m=1;
    while(temp<<1 <=dvd)
    {
      temp<<=1;
      m<<=1;
    }
    dvd-=temp;
    ans+=m;
  }
  return ans*sign;
}
