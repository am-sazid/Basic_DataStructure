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
    int Q;
    cin >> Q;

    Node *head = NULL;
    Node *tail = NULL;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {

            Node *newNode = new Node(V);
            if (head == NULL)
            {
                head = tail = newNode;
            }
            else
            {
                newNode->next = head;
                head = newNode;
            }
        }
        else if (X == 1)
        {

            Node *newNode = new Node(V);
            if (head == NULL)
            {
                head = tail = newNode;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
        }
        else if (X == 2)
        {

            if (head == NULL)
            {
            }
            else if (V == 0)
            {
                Node *del = head;
                head = head->next;
                delete del;
                if (head == NULL)
                    tail = NULL;
            }
            else
            {
                Node *tmp = head;
                for (int i = 1; i < V && tmp->next != NULL; i++)
                {
                    tmp = tmp->next;
                }

                if (tmp->next != NULL)
                {
                    Node *del = tmp->next;
                    tmp->next = del->next;
                    if (del == tail)
                        tail = tmp;
                    delete del;
                }
            }
        }

        print_list(head);
    }

    return 0;
}
