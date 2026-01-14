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
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;           // move slow by 1
            fast = fast->next->next;     // move fast by 2

            if (slow == fast) {          // cycle detected
                return true;
            }
        }

        return false; // no cycle
    }
};

// Example usage
int main() {
    // Creating a linked list: 1 -> 2 -> 3 -> 4 -> 2 (cycle)
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node2; // cycle here

    Solution sol;
    if (sol.hasCycle(node1)) {
        cout << "Cycle detected!" << endl;
    } else {
        cout << "No cycle." << endl;
    }

    return 0;
}
