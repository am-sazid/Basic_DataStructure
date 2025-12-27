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

void insert_any_position(Node *&head, int idx, int val)
{
    Node* newnode = new Node(val);

    Node* tmp = head;

    for (int i = 0; i < idx-1; i++)
    {
        tmp = tmp->next;
    }

    newnode->next = tmp->next;
    tmp->next = newnode;
}


void print_list(Node* head){

    Node* tmp = head;

    while (tmp != NULL)
    {
        cout<< tmp->val<<endl;
        tmp = tmp->next;
    }
    
}

int main()
{
    Node *head = new Node(100);
    Node *a = new Node(200);
    Node *b = new Node(400);

    head->next = a;
    a->next = b;

    insert_any_position(head,2,300);
    insert_any_position(head,1,30);
    print_list(head);

}