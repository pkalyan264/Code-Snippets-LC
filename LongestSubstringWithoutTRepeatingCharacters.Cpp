class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        set<char>st;
        int ans=0;
        int left=0,right=0;
        while(right<s.size())
        {
            if(st.find(s[right])==st.end())
                st.insert(s[right]),ans=max(ans,(right-left)+1),right++;
            else
            {
                st.erase(s[left]);
                left++;
            }
            
        }
        return ans;
    }
};
