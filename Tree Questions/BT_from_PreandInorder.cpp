#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node
{

    int data;
    struct node *left;
    struct node *right;

    node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};

int search(int inorder[], int s, int e, int curr)
{
    for (int i = s; i <= e; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

void inorder_print(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder_print(root->left);
    cout << root->data << " ";
    inorder_print(root->right);
}

node *buildtree(int preorder[], int inorder[], int s, int e)
{
    static int index = 0;
    if (s > e)
    {
        return NULL;
    }
    int curr = preorder[index];
    index++;
    node *temp = new node(curr);
    if (s == e)
    {
        return temp;
    }
    int pos = search(preorder, s, e, curr);
    temp->left = buildtree(preorder, inorder, s, pos - 1);
    temp->right = buildtree(preorder, inorder, pos + 1, e);

    return temp;
}

int main()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    node *root = buildtree(preorder, inorder, 0, 4);
    inorder_print(root);
    return 0;
}