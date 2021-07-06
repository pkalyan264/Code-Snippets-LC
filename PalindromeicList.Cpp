bool PalindromeList(ListNode * head)
{
  if(!head)return true;
  if(!head->next)return true;
  ListNode * slow=head,*fast=head;
  while(fast->next and fast->next->next)
  {
    slow=slow->next,fast=fast->next->next;
  }
  slow->next=ReverseList(slow->next);
  slow=slow->next;
  while(slow)
  {
    if(slow->val!=head->val)return 0;
    slow=slow->next;
    head=head->next;
  }
  return 1;
}
ListNode * ReverseList(ListNode * head)
{
  if(!head)return nullptr;
  ListNode * curr=head,*prev=NULL,*next=NULL;
  while(curr)
  {
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
  }
  return prev;
}
