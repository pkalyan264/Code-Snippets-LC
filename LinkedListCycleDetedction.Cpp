#include<iostream>
using namespace std;
bool DetectCycle(ListNode * head)
{
  if(!head)return 0;
  ListNode*slow=head,*fast=head;
  while(fast->next and fast->next->next)
  {
    slow=slow=->next;
    fast=fast->next->next;
    if(slow==fast)return 1;
  }
  return 0;
}
