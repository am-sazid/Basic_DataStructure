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

void leaf_nd(Node* root, vector<int>& leafs) {
    if (root == NULL) return;

  
    if (root->left == NULL && root->right == NULL) {
        leafs.push_back(root->val);
        return;
    }

    leaf_nd(root->left, leafs);
    leaf_nd(root->right, leafs);
}

int main() {
    vector<int> arr;
    int x;

    while (cin >> x) {
        arr.push_back(x);
    }

    if (arr.empty() || arr[0] == -1) {
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

    vector<int> leafs;
    leaf_nd(root, leafs);

   
    sort(leafs.begin(), leafs.end(), greater<int>());

    for (int v : leafs) {
        cout << v << " ";
    }

    return 0;
}
