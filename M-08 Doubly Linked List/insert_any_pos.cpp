#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
    Node* prev;
    
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_any_pos(Node* head, int idx, int val){
    Node* newNode = new Node(val);

    Node* tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    newNode->next->prev = newNode;

    tmp->next = newNode;
    newNode->prev = tmp;
    
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
    Node* head = new Node(10);
    Node* a = new Node(15);
    Node* tail = new Node(20);
    
    
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;
    insert_any_pos(head,1,100);
    print_list(head);

    return 0;
}