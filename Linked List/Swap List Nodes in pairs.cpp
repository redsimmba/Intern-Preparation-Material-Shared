/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* head) {
    ListNode* ans=head;
    while(head){
        if(head->next){
            swap(head->val,head->next->val);
        }
        else{
            break;
        }
        head=head->next->next;
    }
    return ans;
}
