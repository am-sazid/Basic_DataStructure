#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int main()
{
    
    string s;
    Node *head = NULL;
    Node *tail = NULL;

    while (cin >> s && s != "end")
    {
        Node *newNode = new Node(s);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

   
    int Q;
    cin >> Q;
    cin.ignore();

    Node *current = head;

    for (int i = 0; i < Q; i++)
    {
        string line;
        getline(cin, line);

        if (line.substr(0, 5) == "visit")
        {
            string addr = line.substr(6); 
            Node *temp = head;
            bool found = false;

            while (temp != NULL)
            {
                if (temp->val == addr)
                {
                    current = temp;
                    found = true;
                    break;
                }
                temp = temp->next;
            }

            if (found)
                cout << current->val << endl;
            else
                cout << "Not Available" << endl;
        }
        else if (line == "next")
        {
            if (current != NULL && current->next != NULL)
            {
                current = current->next;
                cout << current->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (line == "prev")
        {
            if (current != NULL && current->prev != NULL)
            {
                current = current->prev;
                cout << current->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
