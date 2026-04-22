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
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast&&fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }

        ListNode* cur=slow->next;
        ListNode* second=slow->next=nullptr;
        
        while(cur){
            ListNode* tmp=cur->next;
            cur->next=second;
            second=cur;
            cur=tmp;
        }

        ListNode* first=head;
        cur=second;
        while(cur){
            ListNode* tmp1= first->next;
            ListNode* tmp2= cur->next;
            first->next=cur;
            cur->next=tmp1;
            first=tmp1;
            cur=tmp2;
        }
    }
};
