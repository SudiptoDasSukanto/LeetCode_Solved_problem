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
        ListNode* temp = head;
        int cnt = 0 ;
        while(temp!=NULL){
            cnt++;
            temp = temp->next ;
        }
        int pos = cnt - n +1;
        if(pos==1){
            return head->next ;
        }
        
        temp = head ;
        
        cnt = 0;
        while(cnt<pos-2){
            temp = temp->next ;
            cnt++;
        }
        temp->next = temp->next->next ;
        return head ;
    }
};