class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) 
    {
            if(!head1 ||!head2)return NULL;
            ListNode* p1=head1,*p2=head2;
            while(p1!=p2)
            {
                p1=p1->next;
                p2=p2->next;
                if(p1==p2)return p1;
                if(p1==NULL)p1=head2;
                if(p2==NULL)p2=head1;
            }
        return p1;
    }
};
