class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        if(!nums.size())return 0;
        int cnt=0,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)cnt++,ans=max(ans,cnt);
            else
                cnt=0;
            
        }
        return ans;
    }
};





class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        if(!nums.size())return 0;
        int ans=0;int j=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                int j=i+1;
                while(j<nums.size() and nums[j]==1)
                {
                    j++;
                }
                cnt=j-i;
                ans=max(cnt,ans);
                i=j-1;
            }
        }
        return ans;
    }
};
