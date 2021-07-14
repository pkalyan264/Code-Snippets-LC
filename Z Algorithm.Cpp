void search(string text,string pattern)
{
  string concat=pattern+'$'+text;
  int n=concat.length();
  int Z[n];
  getZarr(concat,Z);
  for(int i=0;i<n;i++)
  {
    if(Z[i]==pattern.length())
    {
      cout<<"Pattern found at "<<i-pattern.length()-1<<end;
    }
  }
}
void getZarr(string concat,int Z[])
{
  int n=concat.length();
  int l,r,k;
  l=r=0;
  for(int i=0;i<concat.length();i++)
  {
    if(i>r)
    {
      l=r=i;
      while(r<n and concat[r]==concat[r-l])
      {
        r++;
      }
      Z[i]=r-l;
      r--;
    }
    else
    {
      int k=i-l;
      if(Z[k]<r-i+1)
        Z[i]=Z[k];
      else
      {
        l=i;
        while(r<n and str[r-l]==str[r])
        {
          r++;
        }
        Z[i]=l-r;
        r--;
      }
    }
  }
}
