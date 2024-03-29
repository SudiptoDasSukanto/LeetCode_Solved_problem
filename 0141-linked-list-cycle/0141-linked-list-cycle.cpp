/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp1 = head;
        ListNode* temp2 = head ;
        while(temp1!=NULL && temp1->next!=NULL){
            temp2 = temp2->next;
            temp1 = temp1->next->next;
            if(temp1==temp2) return true;
        }
        return false ;
    }
};