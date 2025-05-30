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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1) return list2;
        else if (!list2) return list1;
        ListNode* headptr = nullptr;
        if (list1 && list2 && list1->val <= list2-> val) {
            headptr = list1;
            list1 = list1->next;
        } else if (list1 && list2) { 
            headptr = list2; 
            list2 = list2->next;
        }
        ListNode* copy = headptr;
        while (list1 && list2) {
            if (list1-> val <= list2->val) {
                copy->next = list1;
                list1 = list1->next;
            }
            else {
                copy-> next = list2;
                list2 = list2->next;
            }
            copy = copy->next;
        }
        while (list1) {
            copy->next = list1;
            list1 = list1->next;
            copy = copy->next;
        }
        while (list2) {
            copy->next = list2;
            list2 = list2->next;
            copy = copy->next;
        }
        return headptr;
    }
};
