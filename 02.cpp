/*2. Add Two Numbers
Medium
23.7K
4.6K
Companies
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

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

    ListNode* reverse(ListNode* input) {
        ListNode* result = nullptr;
        while (input){
            result = new ListNode(input->val, result);
            input = input->next;
        }
        return result;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int digit1 = 0;
        int digit2 = 0;
        int val = 0;
        ListNode* d1 = l1;
        ListNode* d2 = l2;

        while (d1){
            d1 = d1->next;
            digit1++;
        }

        while (d2){
            d2 = d2->next;
            digit2++;
        }

        d1 = l1;
        d2 = l2;
        ListNode* result = nullptr;

        for (int i = 0; i < std::max(digit1, digit2) or val; i++){
            if (d1){
                val += d1->val;
                d1 = d1->next;
            }
            if (d2){
                val += d2->val;
                d2 = d2->next;
            }
            if (val < 10){
                result = new ListNode(val, result);
                val = 0;
            } else {
                result = new ListNode(val-10, result);
                val = 1;
            }
        }

        return reverse(result);
    }
};
