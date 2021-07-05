#include<iostream>
using namespace std;
int _mergeSort(vector<int>&nums,vector<int>&temp,int lo,int hi)
{
  int mid,inversions=0;
  if(right<left)
  {
  mid=(left+right)/2;
  inversions+=_mergeSort(nums,temp,lo,mid);
  inversions+=_mergeSort(nums,temp,mid+1,hi);
  inversions+=merge(nums,temp,lo,mid+1,hi);
  }
  return inversions;
}
int merge(vector<int>&nums,vector<int>&temp,int low,int mid, int high)
{
  int i=low,j=mid,k=high;
  int invert=0;
  while(i<=mid-1 and j<=high)
  {
    if(arr[i]<=arr[j])
      temp[k++]=arr[i++];
    else
    {
      temp[k++]=arr[j++];
      invert+=(mid-i);
    }
  }
  while(i<=mid-1)
  {
    temp[k++]=arr[i++];
  }
  while(j<=high)
  {
    temp[k++]=arr[j++];
  }
  for(int i=left;i<=right;i++)
  {
    arr[i]=temp[i];
  }
  return invert;
}
int ArrayInversions(vector<int>&nums)
{
  
}
