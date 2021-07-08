void helper(int index,string s,vector<string>&temp,vector<vector<string>>&ans)
{
  if(index==s.length())ans.push_back(temp);
  for(int i=index;i<s.length();i++)
  {
    if(isPalindrome(s,index,i))
    {
      temp.push_back(s.substr(i-index+1));
      helper(i+1,s,temp,ans);
      temp.pop_back();
    }
  }
}
bool isPalindrome(string s,int start,int end)
{
  while(start<=end)
  {
    if(s[start++]!=s[end--])
      return false;
  }
  return true;
}

vector<vector<string>>PalindromePartition(string s)
{
  vector<string>temp;
  vector<vector<string>>ans;
  helper(0,s,temp,ans);
  return ans;
}
