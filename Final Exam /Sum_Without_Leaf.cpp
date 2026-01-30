#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int v) {
        val = v;
        left = right = NULL;
    }
};

int sumleaf(Node* root) {
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 0;

    return root->val + sumleaf(root->left) + sumleaf(root->right);
}

int main() {
    vector<int> arr;
    int x;

    while (cin >> x) {
        arr.push_back(x);
    }

    if (arr.size() == 0 || arr[0] == -1) {
        cout << 0 << endl;
        return 0;
    }

   
    Node* root = new Node(arr[0]);
    queue<Node*> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < arr.size()) {
        Node* curr = q.front();
        q.pop();

        if (arr[i] != -1) {
            curr->left = new Node(arr[i]);
            q.push(curr->left);
        }
        i++;

        if (i < arr.size() && arr[i] != -1) {
            curr->right = new Node(arr[i]);
            q.push(curr->right);
        }
        i++;
    }

    cout << sumleaf(root) << endl;

    return 0;
}
