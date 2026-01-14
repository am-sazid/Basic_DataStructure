#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    // Single-pass method using slow and fast pointers
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;          // move slow by 1
            fast = fast->next->next;    // move fast by 2
        }

        return slow; // slow is now at the middle
    }
};

// Example usage
int main() {
    // Creating a linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);
    ListNode* node5 = new ListNode(5);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    Solution sol;
    ListNode* mid = sol.middleNode(node1);
    cout << "Middle node value: " << mid->val << endl; // Output: 3

    return 0;
}
