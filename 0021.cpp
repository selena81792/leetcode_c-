/*21. Merge Two Sorted Lists
Easy
16.7K
1.5K
Companies
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *result = nullptr;
        ListNode *prev = nullptr;
        ListNode *next = nullptr;

        while (list1 || list2){
            if (list2 == nullptr){
                result = new ListNode(list1->val, result);
                list1 = list1->next;
            } else if (list1 == nullptr) {
                result = new ListNode(list2->val, result);
                list2 = list2->next;
            } else {
                if (list1->val < list2->val){
                    result = new ListNode(list1->val, result);
                    list1 = list1->next;
                } else {
                    result = new ListNode(list2->val, result);
                    list2 = list2->next;
                }
            }
        }

        while (result){
            next = result->next;
            result->next = prev;
            prev = result;
            result = next;
        }

        return prev;
    }
};