#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int x;
    while (cin >> x)
    {
        if (x == -1)
            break;

        Node *newnode = new Node(x);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }

    Node *current = head;
    while (current != NULL)
    {
        Node *tmp = current;
        while (tmp->next != NULL)
        {
            if (tmp->next->val == current->val)
            {
                Node *del = tmp->next;
                tmp->next = del->next;
                delete del;
            }
            else
            {
                tmp = tmp->next;
            }
        }
        current = current->next;
    }

    Node *t = head;
    while (t != NULL)
    {
        cout << t->val << " ";
        t = t->next;
    }

    return 0;
}
