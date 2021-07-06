class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {
     
        if(!head || !head->next)return NULL;
	ListNode * fast=head,*slow=head;
	while(fast->next and fast->next->next)
		{
			slow=slow->next;
			fast=fast->next->next;
			if(slow==fast)
			{
				slow=head;
				while(slow!= fast)
					{
						slow=slow->next;
						fast=fast->next;
					}
				return slow;
			}
		}
	return NULL;

    }
    
};
