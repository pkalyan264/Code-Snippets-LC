#include<iostream>
using namespace std;
class Item
{
  public:
  int value;
  int weight;
  Item(int a, int b)
  {
    Item.value=a;
    Item.weight=b;
  }
};
static bool comparator(Item i1, Item i2)
{
  double r1,r2;
        r1=(double)i1.value/i1.weight;
        r2=(double)i2.value/i2.weight;
        if(r1>r2)return true;
        return false;
}

double FractionalKnapsack(int W, Item arr[],int n)
{
  sort(arr,arr+n,comparator);
        int curr=0;
        double final=0;
        for(int i=0;i<n;i++)
        {
            if(curr+arr[i].weight<=W)
            {
                curr+=arr[i].weight;
                final+=arr[i].value;
            }
            else
            {
                int remain=W-curr;
                final+=((double)arr[i].value/(double)arr[i].weight)*remain;
                break;
            }
        }
        return final;
}
