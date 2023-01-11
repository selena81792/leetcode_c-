/*206. Reverse Linked List
Easy
16.2K
274
Companies
Given the head of a singly linked list, reverse the list, and return the reversed list.

 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;

        while (curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};