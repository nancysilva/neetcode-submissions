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
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast -> next != nullptr){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        ListNode* second = slow->next;
        slow -> next = nullptr; //Separate the two halves

        ListNode* prev = nullptr;
        ListNode* curr = second;

        //Reverse the second half
        while (curr != nullptr){
            ListNode* next = curr -> next;
            curr -> next = prev;

            prev = curr;
            curr = next;
        }


        ListNode* first = head;
        second = prev;

        //Merge the two lists
        while (second != nullptr) {
            ListNode* parte1 = first->next;
            ListNode* parte2 = second->next;

            first->next = second;
            second->next = parte1;

            first = parte1;
            second = parte2;
        }
        
    }
};
