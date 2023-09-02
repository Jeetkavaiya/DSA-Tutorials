#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    node *left;
    node *right;
    int data;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *build(node *root)
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "For left of " << data << endl;
    root->left = build(root->left);
    cout << "For right of " << data << endl;
    root->right = build(root->right);

    return root;
}

void zigzag(node *root)
{
    if (root == NULL)
    {
        return;
    }

    stack<node *> cur_level;
    stack<node *> next_level;
    bool left_to_right = true;

    cur_level.push(root);

    while (!cur_level.empty())
    {
        node *temp = cur_level.top();
        cur_level.pop();

        if (temp)
        {
            cout << temp->data << " ";

            if (temp)
            {
                if (temp->left)
                {
                    next_level.push(temp->left);
                }

                if (temp->right)
                {
                    next_level.push(temp->right);
                }
            }

            else
            {
                if (temp->right)
                {
                    next_level.push(temp->right);
                }

                if (temp->left)
                {
                    next_level.push(temp->left);
                }
            }
        }

        if (cur_level.empty())
        {
            swap(cur_level, next_level);
            left_to_right = !left_to_right;
        }
    }
}

int main()
{
    node *root = NULL;
    root = build(root);

    cout << "Zigzag Traversal:" << endl;
    zigzag(root);
    return 0;
}