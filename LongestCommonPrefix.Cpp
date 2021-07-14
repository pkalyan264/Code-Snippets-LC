#include<iostream>
using namespace std;
string longestCommonPrefix(vector<string>& strs) 
    {
        int count=0;
        string str;
        int mini=INT_MAX;
        for(int i=0;i<strs.size();i++)
        {
            if(strs[i].length()<mini)
            {
                str=strs[i];
                mini=str.length();
            }
        }
        for(int i=0;i<mini;i++)
        {
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i]!=str[i])
                    return str.substr(0,count);
            }
            count++;
        }
        return str.substr(0,count);
    }
};
