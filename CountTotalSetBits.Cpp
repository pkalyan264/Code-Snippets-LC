#include<iostream>
using namespace std;
TimeComplexity: Number OF bits in the number
int TotalSetBits(int n)
{
  int count=0;
  if(n==0)return 0;
  while(n)
  {
    if(n&1)
    {
      count++;
    }
    n>>=1;
  }
  return count;
}



int CountSetBits(int n)
{
  int count=0;
  if(n==0)return 0;
  while(n)
  {
    n=n&(n-1);
    count++;
  }
  return count;
}
