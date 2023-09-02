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

node *s_t_bst(vector<int> &in, int start, int end, node *root)
{
    if (start > end)
    {
        return NULL;
    }

    int mid = (start + end) / 2;

    root = new node(in[mid]);

    root->left = s_t_bst(in, start, mid - 1, root->left);
    root->right = s_t_bst(in, mid + 1, end, root->right);

    return root;
}

void inorder(node *root, vector<int> &in)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

node *n_t_b(node *root)
{
    vector<int> in;

    inorder(root, in);

    node *ans = s_t_bst(in, 0, in.size() - 1, root);
    return ans;
}

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void levelOrder(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();

        q.pop();

        if (temp == NULL)
        {
            cout << endl;

            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    node *root = NULL;
    root = build(root);

    preorder(root);
    cout << endl;
    levelOrder(root);

    node *ans = n_t_b(root);
    preorder(ans);
    cout << endl;
    levelOrder(ans);
}