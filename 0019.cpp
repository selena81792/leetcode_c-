/*19. Remove Nth Node From End of List
Medium
14.4K
597
Companies
Given the head of a linked list, remove the nth node from the end of the list and return its head.
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy = head;
        ListNode *prev = nullptr;
        ListNode *next = nullptr;
        int max = 0;

        while (dummy){          // count max
            dummy = dummy->next;
            max++;
        }

        if (max == 1){          // special case
            return nullptr;
        } else if (max == n){
            return head->next;
        }

        dummy = head;

        for (int i = 0; i < (max - n - 1); i++){        // get prev
            dummy = dummy->next;
        }

        prev = dummy;
        next = dummy->next->next;
        dummy->next = next;


        return head;
    }
};