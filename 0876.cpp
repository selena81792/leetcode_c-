/*876. Middle of the Linked List
Easy
8.5K
239
Companies
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.
 */

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
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* dummy = head;
        while (dummy){
            count++;
            dummy = dummy->next;
        }
        count /= 2;
        dummy = head;
        for (int i = 0; i < count; i++){
            dummy = dummy->next;
        }
        return dummy;
    }
};