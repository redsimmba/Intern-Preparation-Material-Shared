/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* h1, ListNode* h2) {
    int rem=0;
    ListNode* x=new ListNode(0);
    ListNode* n=x;
    while(h1 and h2){
        int a=h1->val;
        int b=h2->val;
        int t=(a+b+rem)%10;
        rem=(a+b+rem)/10;
        ListNode* temp= new ListNode(t);
        x->next=temp;
        x=x->next;
        h1=h1->next;
        h2=h2->next;
    }
    while(h1){
        int a=h1->val;
        int t=(a+rem)%10;
        rem=(a+rem)/10;
        ListNode* temp=new ListNode(t);
        x->next=temp;
        x=x->next;
        h1=h1->next;
    }
    while(h2){
        int a=h2->val;
        int t=(a+rem)%10;
        rem=(a+rem)/10;
        ListNode* temp=new ListNode(t);
        x->next=temp;
        x=x->next;
        h2=h2->next;
    }
    if(rem!=0){
        ListNode* temp=new ListNode(rem);
        x->next=temp;
    }
    return n->next;
    
}
