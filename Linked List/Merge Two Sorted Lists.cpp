ListNode* Solution::mergeTwoLists(ListNode* a, ListNode* b) 
{
    ListNode* head=new ListNode(0);
    ListNode* x=head;
    while(a && b){
        if(a->val > b->val){
            ListNode* temp=new ListNode(b->val);
            head->next=temp;
            head=head->next;
            b=b->next;
        }
        else{
            ListNode* temp=new ListNode(a->val);
            head->next=temp;
            head=head->next;
            a=a->next;
        }
    }
    if(a && !b){// If excess a are left
        while(a){
            ListNode* temp=new ListNode(a->val);
            head->next=temp;
            head=head->next;
            a=a->next;
            
        }
        
    }
    if(!a && b){// if excess b are left
        while(b){
            ListNode* temp=new ListNode(b->val);
            head->next=temp;
            head=head->next;
            b=b->next;
            
        }
    }
    return x->next;// exclude 0
}