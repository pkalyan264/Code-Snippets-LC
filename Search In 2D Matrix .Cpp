/* LeetCode Version:
All rows are sorted and also each element in the first coloum is greater than the last element of the last column*/
// It is like just a vector in 2 D form. Som we can run binary search on the 2D matrix efficiently.
// Code:
#include<iostream>
using namespace std;
bool 2DMatrix(vector<vector<int>>&matrix,int target)
{
  int m=matrix.size();
  int n=matrix[0].size();
  int low=0,high=n*m-1;
  while(low<=high)
  {
    int mid=low+(high-low)/2;
    if(target==matrix[mid/n][mid%n])return 1;
       else if(target<matrix[mid/n][mid%n])high=mid-1;
    else low=mid+1;
  }
  return 0;
}
