#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void SetMatrixZeroes(vector<vector<int>>&matrix)
{
  bool col=1;
//   a boolean variable to check if the first column contains zero or not
  for(int i=0;i<matrix.size();i++)
  {
    if(matrix[i][0]==0)col=0; /*Set col variable*/
    for(int j=1;j<matrix[0].size();j++)
    {
       if(matrix[i][j]==0)matrix[i][0]=0,matrix[0][j]=0;
    }
  }
//   traversing from bottom excluding first column for special case
   for(int i=matrix.size()-1;i>=0;i--)
   {
     for(int j=matrix[0].size()-1;j>=1;j--)
     {
       if(matrix[i][0]==0 or matrix[0][j]==0)matrix[i][j]=0;
     }
     if(col==0)matrix[i][0]=0;
   }
}
