#include<iostream>
using namespace std;
string Roman(int n)
{
  vector<int>val={1,4,5,9,10,40,50,90,100,400,500,900,1000};
  vector<string>sym{"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
  string ans;
  int i=12;
  while(n)
  {
    if(n/val[i]==0)
    {
      i--;
      continue;
    }
    int x=n/val[i];
    while(x--)
    {
      ans+=sym[i];
      
    }
    n=n%val[i];
  }
  return ans;
}
