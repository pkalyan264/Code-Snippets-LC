class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>>res;
        if(nums.size()<3)return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int target=-nums[i];
            int left=i+1,right=nums.size()-1;
            while(left<right)
            {
                if(nums[left]+nums[right]<target)left++;
                else if(nums[left]+nums[right]>target)right--;
                else
                {
                    vector<int>temp(3,0);
                    temp[0]=nums[i];
                    temp[1]=nums[left];
                    temp[2]=nums[right];
                    res.push_back(temp);
                    while(left < right && nums[left]==temp[1])left++;
                    while(left < right && nums[right]==temp[2])right--;
                }   
            }
            while(i+1<nums.size() and nums[i]==nums[i+1])i++;
        }
        return res;
    }
};
