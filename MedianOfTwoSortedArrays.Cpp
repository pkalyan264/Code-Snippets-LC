double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        if(nums1.size()>nums2.size())return(findMedianSortedArrays(nums2,nums1));
        int x=nums1.size(),y=nums2.size();
        int lo=0,hi=x;
        while(lo<=hi)
        {
            int xpartition=(lo+hi)/2;
            int ypartition=(x+y+1)/2-xpartition;
            int maxleftx=xpartition==0?INT_MIN:nums1[xpartition-1];
            int maxlefty=ypartition==0?INT_MIN:nums2[ypartition-1];
            int minrightx=xpartition==x?INT_MAX:nums1[xpartition];
            int minrighty=ypartition==y?INT_MAX:nums2[ypartition];
            if(maxleftx<=minrighty and maxlefty<=minrightx)
            {
                if((x+y)%2==0)
                    return ((double)max(maxleftx,maxlefty)+(double)min(minrightx,minrighty))/2;
                else return (max(maxleftx,maxlefty));
                
            }
            else if(maxleftx>minrighty)
            {
              hi=xpartition-1;
            }
            else lo=xpartition+1;
        }
        return -1;
    }
