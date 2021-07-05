#include<iostream>
using namespace std;
int BuyandSell(vector<int>prices)
{
  int mini=INT_MAX;
  int profit=INT_MAX;
  for(int i=0;i<prices.size();i++)
  {
    mini=min(mini,prices[i]);
    profit=max(profit,prices[i]-mini);
  }
  return profit;
}
