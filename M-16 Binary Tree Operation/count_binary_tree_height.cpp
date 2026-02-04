#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};


Node* input_tree(){

    int val;
    cin>>val;

    if(val == -1) return NULL;

    Node* root = new Node(val);

    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;

        Node* ml= NULL, *mr=NULL;

        if(l != -1) ml = new Node(l);
        if(r != -1) mr = new Node(r);

        f->left = ml;
        f->right = mr;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }

    return root;
}

int count_height(Node* root){
    if(root == NULL){
        return 0;
    }
    if(root->left== NULL && root->right == NULL){
        return 0;
    }

    int l = count_height(root->left);
    int r = count_height(root->right);

    return max(l,r)+1 ;
}


int main() 
{

    Node* root = input_tree();

    cout<<count_height(root)<<endl;

    
    return 0;
}