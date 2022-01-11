#pragma once
/*
* 21. Merge Two Sorted Lists
* You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

Example 1:

Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: list1 = [], list2 = []
Output: []
Example 3:

Input: list1 = [], list2 = [0]
Output: [0]

Constraints:

The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both list1 and list2 are sorted in non-decreasing order.
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
    // 此算法比较慢，而且代码不过简洁
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) {
            return list2;
        }

        if (list2 == nullptr) {
            return list1;
        }

        ListNode* l1 = nullptr;
        ListNode* l1Head = nullptr;
        bool l1end = false;
        bool l2end = false;

        int val = 0;
        while (true) {
            if (!l1end && !l2end) {
                if (list1->val <= list2->val) {
                    val = list1->val;
                    list1 = list1->next;
                    if (list1 == nullptr) {
                        l1end = true;
                    }
                } else {
                    val = list2->val;
                    list2 = list2->next;
                    if (list2 == nullptr) {
                        l2end = true;
                    }
                }
            } else if (!l1end && l2end) {
                val = list1->val;
                list1 = list1->next;
                if (list1 == nullptr) {
                    l1end = true;
                }
            } else if (l1end && !l2end) {
                val = list2->val;
                list2 = list2->next;
                if (list2 == nullptr) {
                    l2end = true;
                }
            }

            ListNode* pNewNode = new ListNode(val);
            pNewNode->next = nullptr;
            if (l1Head == nullptr) {
                l1Head = pNewNode;
                l1 = l1Head;
            } else {
                l1->next = pNewNode;
                l1 = l1->next;
            }

            if (l1end && l2end) {
                break;
            }
        }

        return l1Head;
    }

    // 递归，代码简洁，速度快
    ListNode* mergeTwoLists1(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) {
            return list2;
        }

        if (list2 == nullptr) {
            return list1;
        }

        ListNode* head;
        if (list1->val <= list2->val) {
            head = list1;
            head->next = mergeTwoLists1(list1->next, list2);
        } else {
            head = list2;
            head->next = mergeTwoLists1(list1, list2->next);
        }

        return head;
    }
};
