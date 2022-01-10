#pragma once
/*
* 19. Remove Nth Node From End of List
* Given the head of a linked list, remove the nth node from the end of the list and return its head.

Example 1:

Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]
 
Constraints:

The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz
*/

//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//};


// ˼·�� ����ָ��headָ�룬��һ������n����Ȼ������ָ��ͬʱ����ƶ�������һ�������յ��ʱ��ڶ���ָ���λ�þ���Ҫɾ����λ�� (�밡����)
// ��չ: O(1)ʱ����ɾ��ָ��������

class Solution19 {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p1 = head;
        ListNode* p2 = head;

        for (int i = 0; i < n; i++) {
            p1 = p1->next;
        }

        if (p1 == nullptr) {
            return head->next;
        }

        while (p1->next != nullptr) {
            p1 = p1->next;
            p2 = p2->next;
        }

        p1 = p2->next;
        p2->next = p1->next;

        return head;
    }
};
