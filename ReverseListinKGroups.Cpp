int length(ListNode* head)
{
  int count=0;
  if(!head)return count;
  while(head)
  {
    count++;
    head=head->next;
  }
  return count;
}
ListNode * ReverseKGroups(ListNode * head,int k)
{
    if(!head)return NULL;
  if(length(head)<k or k==1)return head;
  ListNode * curr=head;
  ListNode * prev=NULL,*next=NULL;
  int count=0;
  while(count<k and curr)
  {
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
    count++;
  }
  head->next= ReverseKGroups(curr);
  return prev;
}
