#include<iostream>
ListNode * Middle(ListNode * head)
{
  ListNode * slow=head,*fast=head;
  while(fast and fast->next)
  {
    slow=slow->next ;
    fast=fast->nexr->next;
  }
  return slow;
}
