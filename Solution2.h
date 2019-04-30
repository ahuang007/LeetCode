//
// Created by Administrator on 2019/4/30.
//

#ifndef TESTCODE_SOLUTION2_H
#define TESTCODE_SOLUTION2_H

#include <iostream>
#include <vector>
using namespace std;

/*
 You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example:

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* l3 = NULL;
    ListNode* tail = l3;
    bool over = false;
    while(l1 != NULL || l2 != NULL){
        int num = 0;
        if(over) num++;
        over = false;

        if(l1 != NULL){
            num += l1->val;
            l1 = l1->next;
        }
        if(l2 != NULL){
            num += l2->val;
            l2 = l2->next;
        }
        if(num >= 10){
            over = true;
            num -= 10;
        }
        ListNode* elem = new ListNode(num);
        if(tail == NULL) {
            l3 = elem;
            tail = l3;
        } else {
            tail->next = elem;
            tail = tail->next;
        }
    }
    if(over){
        ListNode* elem = new ListNode(1);
        tail->next = elem;
    }

    return l3;
}


#endif //TESTCODE_SOLUTION2_H
