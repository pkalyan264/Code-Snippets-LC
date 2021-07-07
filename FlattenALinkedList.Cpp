ListNode * flatten(ListNode * head)
{
  if(!head ||!head->next)return head;
  root->next=flatten(root,root->next);
  root=MergeTwoLists(root,root->next);
  return root;
}
ListNode * MergeTwoLists(ListNode * a, ListNode * b)
{
  if(!a and !b)return NULL;
  if(!a)return b;
  if(!b)return a;
  ListNode * head;
  if(a->val<b->val)
  {
    head=a;
    a=a->bottom;
  }
  else
  {
    head=b;
    b=b->bottom;
  }
  ListNode *p=head;
  while(a and b)
  {
    if(a->val<b->val)
    {
      head->bottom=a;
      a=a->bottom;
    }
    else
    {
      head->bottom=b;
      b=b->bottom;
    }
    head->bottom->bottom=NULL;
    head=head->bottom;
  }
  if(a)head->bottom=a;
  if(b)head->bottom=b;
  return p;
}
