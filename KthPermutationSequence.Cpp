#include<iostream>
using namespace std;
string KthPermutation(int n,int k)
{
  int fact=1;
  vector<int>numbers;
  string ans;
  for(int i=1;i<n;i++)
  {
    numbers.push_back(i);
    fact*=i;
  }
  numbers.push_back(n);
  k=k-1;
  while(true)
  {
    ans+=to_string(numbers[k/fact]);
    numbers.erase(numbers.begin()+k/fact);
    if(number.size()==0)break;
    k=k%fact;
    fact/=numbers.size();
  }
  return ans;
}
