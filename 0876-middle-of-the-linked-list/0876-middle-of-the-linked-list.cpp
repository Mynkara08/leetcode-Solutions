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
int getlength(ListNode* head){
   int l=0;
   while(head!=NULL){
       l++;
       head=head->next;
   }
   return l;
}
    ListNode* middleNode(ListNode* head) {
        int len=getlength(head);
        int ans=len/2;
        ListNode *prev=head;
        int ct=0;
        while(ans>ct){
            prev=prev->next;
            ct++;
        }
        return prev;
        
    }
};