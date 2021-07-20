class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n=nums.size();
        if(!n)return 0;
        vector<int>maxi(nums.size(),0);
        vector<int>mini(nums.size(),0);
        maxi[0]=nums[0];
        mini[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            maxi[i]=max(maxi[i-1]*nums[i],max(mini[i-1]*nums[i],nums[i]));
            mini[i]=min(maxi[i-1]*nums[i],min(mini[i-1]*nums[i],nums[i]));
        }
        int res=INT_MIN;
        for(int i=0;i<n;i++)
        {
            res=max(res,maxi[i]);   
        }
        return res;
    }
};
