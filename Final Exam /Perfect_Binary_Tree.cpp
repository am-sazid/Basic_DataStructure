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


int f_depth(Node* root) {
    int depth = 0;
    while (root) {
        depth++;
        root = root->left;
    }
    return depth;
}


bool perfect(Node* root, int depth, int level = 1) {
    if (root == NULL)
        return true;

  
    if (root->left == NULL && root->right == NULL)
        return depth == level;

    
    if (root->left == NULL || root->right == NULL)
        return false;

    return perfect(root->left, depth, level + 1) &&
           perfect(root->right, depth, level + 1);
}

int main() {
    vector<int> arr;
    int x;

    while (cin >> x) {
        arr.push_back(x);
    }

    if (arr.empty() || arr[0] == -1) {
        cout << "NO";
        return 0;
    }

   
    Node* root = new Node(arr[0]);
    queue<Node*> q;
    q.push(root);

    int i = 1;
    int node_cnt = 1;

    while (!q.empty() && i < arr.size()) {
        Node* curr = q.front();
        q.pop();

        if (arr[i] != -1) {
            curr->left = new Node(arr[i]);
            q.push(curr->left);
            node_cnt++;
        }
        i++;

        if (i < arr.size() && arr[i] != -1) {
            curr->right = new Node(arr[i]);
            q.push(curr->right);
            node_cnt++;
        }
        i++;
    }

    int depth = f_depth(root);


    int exp_node = pow(2, depth) - 1;

    if (node_cnt == exp_node && perfect(root, depth))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
