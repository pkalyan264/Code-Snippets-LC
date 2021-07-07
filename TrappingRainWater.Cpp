class Solution {
public:
    int trap(vector<int>& heights) 
    {
        int ans=0;
        int leftmax=INT_MIN;
        int rightmax=INT_MIN;
        int left=0,right=heights.size()-1;
        while(left<right)
        {
            leftmax=max(leftmax,heights[left]);
            rightmax=max(rightmax,heights[right]);
            if(leftmax<rightmax)
            {
                ans+=leftmax-heights[left];
                left++;
            }
            else
                ans+=rightmax-heights[right--];
        }
        return ans;
    }
};
