#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int v)
    {
        val = v;
        left = right = NULL;
    }
};


void print_level(Node *root, int level, bool &found)
{
    if (!root)
        return;
    if (level == 0)
    {
        cout << root->val << " ";
        found = true;
        return;
    }
    print_level(root->left, level - 1, found);
    print_level(root->right, level - 1, found);
}

int main()
{
    vector<int> arr;
    int x;

   
    vector<int> input;
    while (cin >> x)
        input.push_back(x);

    if (input.size() < 2)
    { 
        cout << "Invalid";
        return 0;
    }

    int L = input.back(); 
    input.pop_back();     
    arr = input;

    if (arr.empty() || arr[0] == -1)
    {
        cout << "Invalid";
        return 0;
    }

  
    Node *root = new Node(arr[0]);
    queue<Node *> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < arr.size())
    {
        Node *curr = q.front();
        q.pop();

        if (arr[i] != -1)
        {
            curr->left = new Node(arr[i]);
            q.push(curr->left);
        }
        i++;

        if (i < arr.size() && arr[i] != -1)
        {
            curr->right = new Node(arr[i]);
            q.push(curr->right);
        }
        i++;
    }

    bool found = false;
    print_level(root, L, found);

    if (!found)
        cout << "Invalid";

    return 0;
}
