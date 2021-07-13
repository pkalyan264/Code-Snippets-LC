#include<iostream>
using namespace std;
string LongestPalindrome(string s)
{
  int st=0,end=0,max_len=0;
  for(int i=0;i<s.size();i++)
  {
    int l=i,r=i;
    while (l>=0 and r<=s.size()-1)
    {
      if(s[i]==s[j])
      {
        i--;j++;
      }
      else
          break;
    }
    int len=j-i-1;
    if(len>max_len)
            {
                max_len=len;
                st=l+1;end=r-1;
            }
  }
  for(int i=0;i<s.size();i++)
  {
    int l=i,r=i+1;
    while (l>=0 and r<=s.size()-1)
    {
      if(s[i]==s[j])
      {
        i--;j++;
      }
      else
          break;
    }
    int len=j-i-1;
    if(len>max_len)
            {
                max_len=len;
                st=l+1;end=r-1;
            }
  }
  return s.substr(st,max_len);
}
