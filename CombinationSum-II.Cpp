void backtrack(int start,int target,vector<int>nums,vector<int>&ds,vector<vector<int>>&ans)
{
  if(target==0)ans.push_back(ds),return;
  if(target<0)return;
  for(int i=start;i<nums.size();i++)
  {
    if(i==start or nums[i]!=nums[i-1])
    {
      ds.push_back(nums[i]);
      backtrack(i+1,target-nums[i],nums,ds,ans);
      ds.pop_back();
    }
  }
}
vector<vector<int>>combinationSum2(vector<int>nums,int target)
{
  vector<vector<int>>ans;
  vector<int>ds;
  sort(nums.begin(),nums.end());
//   To make sure that duplicates are present at side by side so that they can be avoided.
  backtrack(0,target,nums,ds,ans);
  return ans;
}
