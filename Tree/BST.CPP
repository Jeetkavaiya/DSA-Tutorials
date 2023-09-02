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

void levelorder(node *root)
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

node *insertIntoBST(node *&root, int d)
{
    if (root == NULL)
    {
        root = new node(d);
        return root;
    }

    if (d > root->data)
    {
        root->right = insertIntoBST(root->right, d);
    }

    else
    {
        root->left = insertIntoBST(root->left, d);
    }

    return root;
}

void takeinput(node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

node *min_value(node *root)
{
    if (root == NULL)
    {
        return NULL;
    }

    node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

node *max_value(node *root)
{
    if (root == NULL)
    {
        return NULL;
    }

    node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

node *del(node *root, int val)
{
    if (root == NULL)
    {
        return root;
    }

    if (root->data == val)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // 1 child

        // left child
        if (root->left != NULL && root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        // right vhild
        if (root->left == NULL && root->right != NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if (root->left != NULL && root->right != NULL)
        {
            int min = min_value(root->right)->data;
            root->data = min;
            root->right = del(root->right, min);
            return root;
        }
    }

    else if (root->data > val)
    {
        root->left = del(root->left, val);
        return root;
    }
    else
    {
        root->right = del(root->right, val);
        return root;
    }
}

bool searchInBST(node *root, int x)
{
    node *temp = root;
    while (temp != NULL)
    {
        if (temp->data == x)
        {
            return true;
        }
        if (temp->data > x)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
    return false;
}

int main()
{
    node *root = NULL;

    // 10 8 21 7 27 5 4 3 -1
    cout << "Enter data to create BST" << endl;
    takeinput(root);

    cout << "Binary search tree:" << endl;
    levelorder(root);

    // cout<<searchInBST(root,15);
    cout << "Min & Max values:" << endl;
    cout << min_value(root)->data << endl;
    cout << max_value(root)->data << endl;

    // 50 20 70 10 30 90 110 -1
    root = del(root, 50);
    cout << "After deletion BST is:" << endl;
    levelorder(root);
    return 0;
}

/*node* dlt(node* root,int key)
{
    if(key < root->data)
    {
        root->left = dlt(root->left,key);
    }

    else if(key > root->data)
    {
        root->right = dlt(root->right,key);
    }

    else
    {
        if(root->left == NULL)
        {
            node* temp = root->right;
            free(root);
            return temp;
        }

        else if(root->right ==  NULL)
        {
            node* temp = root->left;
            free(root);
            return temp;
        }

        else
        {
            node* temp = min_val(root->right);
            root->data = temp->data;
            root->right = dlt(root->right,temp->data);
        }
    }
    return root;
}*/