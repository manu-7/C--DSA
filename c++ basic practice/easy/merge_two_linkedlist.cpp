#include <iostream>

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

void printList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr)
            return list2;
        if (list2 == nullptr)
            return list1;

        ListNode* ptr = nullptr;
        if (list1->val > list2->val) {
            ptr = list2;
            list2 = list2->next;
        } else {
            ptr = list1;
            list1 = list1->next;
        }

        ListNode* curr = ptr;

        while (list1 && list2) {
            if (list1->val < list2->val) {
                curr->next = list1;
                list1 = list1->next;
            } else {
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }

        if (!list1)
            curr->next = list2;
        else
            curr->next = list1;

        return ptr;
    }
};


int main() {
    // Creating two sorted linked lists
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(3);
    list1->next->next = new ListNode(5);

    ListNode* list2 = new ListNode(2);
    list2->next = new ListNode(4);
    list2->next->next = new ListNode(6);

    // Printing original lists
    std::cout << "List 1: ";
    printList(list1);

    std::cout << "List 2: ";
    printList(list2);

    // Merging two sorted lists
    Solution solution;
    ListNode* mergedList = solution.mergeTwoLists(list1, list2);

    // Printing the merged list
    std::cout << "Merged List: ";
    printList(mergedList);

    // Clean up memory (not shown in the original code)
    // ...

    return 0;
}
