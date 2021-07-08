#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int MinimumCoins(vector<int>&amounts,int target)
{
	vector<int>ans;
  int number=0;
  int i=amounts.size()-1;
  for(int i=amounts.size()-1;i>=0;i--)
  {
  	while(target>=amounts[i])
  	{
  		target-=amounts[i];
  		ans.push_back(amounts[i]);
  		number++;
  	}
  }
  
  return number;
}
int main()
{
	vector<int>nums={1,2,5,10,20,50,100,200,500,1000};
	int target=49;
	cout<<MinimumCoins(nums,target);
	return 0;
}
