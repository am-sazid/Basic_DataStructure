#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node *head)
{
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    int Q;
    cin >> Q;

    Node *head = NULL;
    Node *tail = NULL;
    int size = 0;

    for (int i = 0; i < Q; i++)
    {
        int X, V;
        cin >> X >> V;

        if (X < 0 || X > size)
        {
            cout << "Invalid" << endl;
            continue;
        }

        Node *newNode = new Node(V);

        if (X == 0) 
        {
            if (head == NULL)
            {
                head = tail = newNode;
            }
            else
            {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
        }
        else if (X == size) 
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        else 
        {
            Node *tmp = head;
            for (int j = 0; j < X; j++)
            {
                tmp = tmp->next;
            }
            Node *prevNode = tmp->prev;
            prevNode->next = newNode;
            newNode->prev = prevNode;
            newNode->next = tmp;
            tmp->prev = newNode;
        }

        size++;

        print_forward(head);
        print_backward(tail);
    }

    return 0;
}
