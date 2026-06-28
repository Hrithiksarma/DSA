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
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast!=nullptr&&fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* mid=slow;
       ListNode*  prev=nullptr;
        while(mid!=nullptr){
           ListNode*  nextnode=mid->next;
           mid->next=prev;
           prev=mid;
           mid=nextnode;
        }


            ListNode* first_half=head;
            ListNode* second_half=prev;

            while(second_half!=nullptr){
                if (first_half->val!=second_half->val){
                    return false;
                }
                first_half=first_half->next;
                second_half=second_half->next;

                
            }
            
    return true;

    }
};