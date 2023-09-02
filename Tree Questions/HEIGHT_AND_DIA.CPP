#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

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

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int l = height(root->left);
    int r = height(root->right);

    int ans = max(l, r) + 1;

    return ans;
}

// Diameter with O(n^2)
int dia(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int l = dia(root->left);
    int r = dia(root->right);
    int h = height(root->left) + height(root->right) + 1;

    int ans = max(h, max(l, r));

    return ans;
}

// Diameter with O(n):
pair<int, int> diameter(node *root) // the first block of pair gives diameter and second block of pair gives height
{
    // base case
    if (root == NULL)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }

    pair<int, int> left = diameter(root->left);
    pair<int, int> right = diameter(root->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;

    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3));
    ans.second = max(left.second, right.second) + 1;

    return ans;
}

int diameterfast(node *root)
{
    return diameter(root).first;
}

int main()
{
    node *root = NULL;
    root = build(root);

    cout << height(root) << endl;
    cout << dia(root) << endl;
}