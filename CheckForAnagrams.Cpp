bool isAnagram(string s,string t)
{
  if(s.size()!=t.size())
  return false;
  unirdered_map<char,int>um;
  for(int i=0;i<s.size();i++)
  {
    um[s[i]]++;
    um[t[i]]++;
  }
  for (auto x: um)
  {
    if(x.second)return false;
  }
  return true;
}
