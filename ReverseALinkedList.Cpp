ListNode * ReverseLinkedList(ListNode* head)
{
  if(!head)return nullptr;
  LIstNode *curr=head;
  ListNode * prev=NULL;
  ListNode *next=NULL;
  while(curr)
  {
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
   }
  return prev;
}
