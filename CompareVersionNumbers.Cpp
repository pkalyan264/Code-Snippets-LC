int Compare(string c1,string c2)
{
  int i=0,j=0;
  while(i<c1.size() or j<c2.size())
  {
    int s1=0,s2=0;
    while(i<c1.size() and c1[i]!='.')
    {
      s1=s1*10+(c1[i]-'0');
      i++;
    }
    while(j<c2.size() and c2[j]!='.')
    {
      s2=s2*10+(c2[j]-'0');
      j++;
    }
    if(s1<s2)return -1;
    if(s1>s2)return 1;
    i++;
    j++;
  }
  return 0;
}
