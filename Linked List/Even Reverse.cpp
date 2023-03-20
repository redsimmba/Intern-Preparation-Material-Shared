/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* head) {
    stack<int> s;
    ListNode* t=head;
    int cnt=0;
    while(t){
        if(cnt%2){
            s.push(t->val);
        }
        cnt++;
        t=t->next;
    }
    ListNode* x=head;
    cnt=0;
    while(x){
        if(cnt%2){
            x->val=s.top();
            s.pop();
        }
        cnt++;
        x=x->next;
    }
    return head;
    
}
