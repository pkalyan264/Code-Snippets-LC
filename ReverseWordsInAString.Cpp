#include<iostream>
using namespace std;
string ReverseWords(string s)
{
  stack<string>st;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]==' ')continue;
    else
    {
      string temp;
      while(i<s.size() and s[i]!=' ')
      {
        temp+=s[i];
        i++;
      }
      st.push(temp);
    }
  }
  string ans;
  while(st.size()!=1)
  {
    ans+=st.top();
    ans+=' ';
    st.pop();
  }
  ans+=st.top();
  return ans;
}
