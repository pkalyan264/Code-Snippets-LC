class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if(!nums.size())return 0;
        int ans=0;
        set<int>st;
        for(int i=0;i<nums.size();i++)
            st.insert(nums[i]);
        for(int i=0;i<nums.size();i++)
        {
            if(st.find(nums[i]-1)!=st.end())
                continue;
            else
            {
                int streak=1;
                int curr=nums[i];
                while(st.find(curr+1)!=st.end())
                {
                    streak++;
                    curr++;
                }
                ans=max(streak,ans);
                
            }
        }
        return ans;
    }
};
