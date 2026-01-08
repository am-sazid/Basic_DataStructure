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
        this->next = next;
        this->prev = prev;
    }
};

void insert_at_head(Node *&head, int val)
{
    Node *newnode = new Node(val);

    newnode->val = val;
    newnode->next = head;
    head->prev = newnode;

    head = newnode;
}

void print_list(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    insert_at_head(head, 60);
    insert_at_head(head, 70);
    insert_at_head(head, 80);
    print_list(head);
}