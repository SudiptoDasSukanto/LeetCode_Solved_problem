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
        ListNode* reList = NULL ;
        ListNode* temp ;
        if(head==NULL) return head ;
        while(head!=NULL){
            temp = head;
            head = head->next ;
            temp->next = reList ;
            reList = temp ;
        }
        return reList ;
    }
};