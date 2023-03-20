/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// Iterative Solution
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode * prev=NULL;
        ListNode * curr=head;
        ListNode * next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
};

//Recursive Solution
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        //Base Case
        if(head==NULL || head->next==NULL){
            return head;
        }
        //Recursive Case
        ListNode * temp=reverseList(head->next);
        head->next->next=head;// 1->2<-3 to 3->2->1
        head->next=NULL;//Starting element
        return temp;
    }
};

