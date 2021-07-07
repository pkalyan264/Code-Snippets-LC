ListNode * RotateList(ListNode * head,int k)
{
  if(!head or k==0)return head;
  ListNode * curr=head;
  int len=1;
  while(curr->next)
  {
    len++;
    curr=curr->next;
  }
  curr->next=head;
  k=k%len;
  k=len-k;
  for(int i=0;i<k;i++)
  {
    curr=curr->next;
  }
  head=curr->next;
  curr->next=NULL;
  return head;
}
