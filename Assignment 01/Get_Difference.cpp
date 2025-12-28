#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    long long val;
    Node* next;

    Node(long long val) {
        this->val = val;
        this->next = NULL;
    }
};

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    long long x;
    while (cin >> x) {
        if (x == -1) break;

        Node* newNode = new Node(x);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

   
    if (head == NULL || head->next == NULL) {
        cout << 0;
        return 0;
    }

    long long mx = head->val;
    long long mn = head->val;

    Node* tmp = head;
    while (tmp != NULL) {
        mx = max(mx, tmp->val);
        mn = min(mn, tmp->val);
        tmp = tmp->next;
    }

    cout << mx - mn;

    return 0;
}
