/*
 *
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
            ListNode* prev = nullptr;
            ListNode* curr = head;
            while (curr) {
                ListNode* next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            return prev;
        }
    
        ListNode* removeNodes(ListNode* head) {
            if (!head) return nullptr;
    
         
            head = reverseList(head);
    
            
            ListNode* newHead = head;
            ListNode* curr = head;
            int maxVal = head->val;
            
            while (curr->next) {
                if (curr->next->val < maxVal) {
                  
                    curr->next = curr->next->next;
                } else {
                   
                    curr = curr->next;
                    maxVal = curr->val;
                }
            }
    
          
            return reverseList(newHead);
        }
    };
    