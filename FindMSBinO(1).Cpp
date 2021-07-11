#include<iosteam>
using namespace std;
int MSB(int n)
{
  int k=log(n)/log(2);
  return 1<<k;
}
