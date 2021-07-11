class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int lo=0,hi=nums.size()-1;
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target)return mid;
            /* Left half is sorted */
            if(nums[lo]<=nums[mid])
            {
                /*Target lies in our left half*/
                if(nums[lo]<=target and nums[mid]>=target)
                {
                    hi=mid-1;
                }
                else
                {
                    lo=mid+1;
                }
            }
            /*Right half is sorted */
            else
            {
                /*Target lies in our right half*/
                if(nums[mid]<=target and target<=nums[hi])
                {
                    lo=mid+1;
                }
                else
                {
                    hi=mid-1;
                }
            }
        }
        return -1;
    }
};
