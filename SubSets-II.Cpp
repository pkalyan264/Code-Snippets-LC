class Solution {
public:
    void helper(vector<vector<int>>&ans,vector<int>&ds,int index,vector<int>nums)
    {
        ans.push_back(ds);
        for(int i=index;i<nums.size();i++)
        {
            if(i!=index and nums[i]==nums[i-1])continue;
            ds.push_back(nums[i]);
            helper(ans,ds,i+1,nums);
            ds.pop_back();
        }
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>temp;
        helper(ans,temp,0,nums);
        return ans;
    }
};
