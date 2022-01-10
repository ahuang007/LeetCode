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


// 思路： 两个指向head指针，第一个先手n步，然后两个指针同时向后移动，当第一个到达终点的时候第二个指针的位置就是要删除的位置 (秒啊！！)
// 扩展: O(1)时间内删除指定链表结点

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
