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

int count(node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    int left = count(root->left);
    int right = count(root->right);

    return left + right + 1;
}

int sum(node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    int left = sum(root->left);
    int right = sum(root->right);

    return left + right + root->data;
}

int main()
{
    node* root = NULL;
    root = build(root);

    cout<<count(root)<<endl;
    cout<<sum(root)<<endl;
}