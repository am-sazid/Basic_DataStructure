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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}


void print_reverse(Node *tmp)
{

    if (tmp == NULL)
    {
        return;
    }
    
    cout << tmp->val << endl;
    print_reverse(tmp->next);
}

void delete_head(Node* &head){

    Node* deletehead = head;
    head = head->next;
    delete deletehead;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }

    delete_head(head);

    print_reverse(head);

    return 0;
}