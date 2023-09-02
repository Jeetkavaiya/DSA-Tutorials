#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
    public :

    int data;
    node* left;
    node* right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


node *build(node *root)
{
    cout << "enter a data" << endl;
    int data;
    cin >> data;

    root = new node(data);

    while (data == -1)
    {
        return NULL;
    }

    cout << "for left" << endl;
    root->left = build(root->left);
    cout << "for right" << endl;

    root->right = build(root->right);

    return root;
}


void left(node* root)
{
    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        int n = q.size();

        for(int i=0;i<n;i++)
        {
            node* temp = q.front();
            q.pop();

            if(i == 0)
            {
                cout<<temp->data<<" ";
            }

            if(temp->left)
            {
                q.push(temp->left);
            }

            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void right(node* root)
{
    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        int n = q.size();

        for(int i=0;i<n;i++)
        {
            node* temp = q.front();
            q.pop();

            if(i == n-1)
            {
                cout<<temp->data<<" ";
            }

            if(temp->left)
            {
                q.push(temp->left);
            }

            if(temp->right)
            
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    node* root = NULL;
    root = build(root);

    left(root);
    cout<<endl;
    right(root);
}