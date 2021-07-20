int parent[10000];
int rank[10000];

int findPar(int node)
{
  if(node==parent)return node;
  return parent[node]=findPar(parent[node]);
}
void makeSet()
{
  for(int i=1;i<=n;i++)
  {
    parent[i]=i;
    rank[i]=0;
  }
}
void union(int u,int v)
{
  u=findPar(u);
  v=findPar(v);
  if(rank[u]<rank[v])
  {
    parent[u]=v;
  }
  else if(rank[v]<rank[u])
  {
    parent[v]=u;
  }
  else 
  {
    parent[u]=v;
    rank[v]++;
  }
  
}
void main()
{
  makeSet();
  int m;
  cin>>m;
  while(m--)
  {
    int u,v;
    cin>>u>>v;
    union(u,v);
  }
  if(findPar(2)!=findPar(3))cout<<"Different Components";
  else cout<<"Same Component";
}
