#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

Node *buildTree(const vector<int> &nums)
{
    if (nums.empty() || nums[0] == -1)
        return NULL;

    Node *root = new Node(nums[0]);
    queue<Node *> q;
    q.push(root);

    size_t i = 1;
    while (!q.empty() && i < nums.size())
    {
        Node *curr = q.front();
        q.pop();

        if (i < nums.size() && nums[i] != -1)
        {
            curr->left = new Node(nums[i]);
            q.push(curr->left);
        }
        i++;

        if (i < nums.size() && nums[i] != -1)
        {
            curr->right = new Node(nums[i]);
            q.push(curr->right);
        }
        i++;
    }
    return root;
}

vector<Node *> getPath(Node *root, bool preferLeft)
{
    vector<Node *> path;
    if (!root)
        return path;

    Node *curr = root;
    path.push_back(curr);

    while (curr->left || curr->right)
    {
        if (preferLeft)
        {
            if (curr->left)
                curr = curr->left;
            else
                curr = curr->right;
        }
        else
        {
            if (curr->right)
                curr = curr->right;
            else
                curr = curr->left;
        }
        path.push_back(curr);
    }

    return path;
}

int main()
{
    vector<int> nums;
    int num;
    while (cin >> num)
        nums.push_back(num);

    Node *root = buildTree(nums);
    if (!root)
        return 0;

    vector<Node *> leftPath = getPath(root, true);
    vector<Node *> rightPath = getPath(root, false);

    vector<int> result;

    bool leftActual = true;
    if (leftPath.size() > 1 && root->right && leftPath[1] == root->right)
        leftActual = false;

    if (leftActual)
    {
        for (int i = leftPath.size() - 1; i >= 0; i--)
            result.push_back(leftPath[i]->val);
    }
    else
    {
        result.push_back(root->val);
    }

    bool rightActual = true;
    if (rightPath.size() > 1 && root->left && rightPath[1] == root->left)
        rightActual = false;

    if (rightActual)
    {
        for (size_t i = 1; i < rightPath.size(); i++)
            result.push_back(rightPath[i]->val);
    }

    for (size_t i = 0; i < result.size(); i++)
        cout << result[i] << (i == result.size() - 1 ? "\n" : " ");

    return 0;
}
