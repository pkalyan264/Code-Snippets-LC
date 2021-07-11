bool isPOwwerof2(int a)
{
  if(a<1)return false;
  if(a==1)return true;
  return !(a&(a-1));
}
