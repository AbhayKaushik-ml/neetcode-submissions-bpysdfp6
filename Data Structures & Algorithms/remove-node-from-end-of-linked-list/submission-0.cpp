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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast=head;
        int size=0;
        int tmp=-1;
        while(fast!=nullptr){
            size+=1;
            fast=fast->next;
        }

        if((size-n)==0){
            return head->next;
        }
        fast=head;
        for(int i=0;i<size-1;i++){
            if((i+1)==(size-n)){
               fast->next=fast->next->next;
               break;
            }
            fast=fast->next;
        }
        return head;
    }
};
