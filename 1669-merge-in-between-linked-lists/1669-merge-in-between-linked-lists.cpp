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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* head2 = list2;
        ListNode* tail2 = list2;
        while(tail2->next!=NULL){
            tail2 = tail2->next;
        }
        
        ListNode* temp = list1 ;
        ListNode*  athnode;
        ListNode*  bthnode;
        int cnt = 0;
        while(temp!=NULL){
            if(cnt==a-1){
                athnode = temp ;
                
            }
            if(cnt==b+1){
                bthnode = temp;
                break;
            }
            cnt++;
            temp = temp->next;
        }
        athnode->next = head2 ;
        tail2->next = bthnode ;
        
        return list1 ;
    }
};