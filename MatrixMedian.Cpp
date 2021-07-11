int median(vector<vector<int>>matrix)
{
  int rows=matrix.size();
  int cols=matrix[0].size();
  int mini=INT_MAX,maxi=INT_MIN;
  for(int i=0;i<rows;i++)
  {
    mini=min(mini,matrix[i][0]);
    maxi=max(maxi,matrix[i][cols-1]);
  }
  int req=(rows*cols+1)/2;
  while(mini<maxi)
  {
    int mid=mini+(maxi-mini)/2;
    int count=0;
    for(int i=0;i<rows;i++)
    {
      count+=upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
    }
    if(count<req)
    {
      mini=mid+1;
    }
    else
      maxi=mid;
  }
}
return mini;
};
