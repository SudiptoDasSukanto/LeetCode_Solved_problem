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
    bool isPalindrome(ListNode* head) {
        string s = "";
        while(head!=NULL){
            int x = head->val;
            s+=x;
            head = head->next ;
        }
        string ss = s;
        reverse(s.begin(),s.end());
        if(s==ss) return true;
        return false;
    }
};