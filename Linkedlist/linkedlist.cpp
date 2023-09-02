#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// INSERTION:

void InsertAtHead(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        node *temp = new node(data);
        head = temp;
        tail = temp;
    }

    else
    {
        node *temp = new node(data);
        temp->next = head;
        head = temp;
    }
}

void InsertAtTail(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        node *temp = new node(data);
        head = temp;
        tail = temp;
    }

    else
    {
        node *temp = new node(data);
        tail->next = temp;
        tail = temp;
    }
}

void InsertAtPos(node *&head, node *&tail, int data, int pos)
{
    if (head == NULL)
    {
        node *temp = new node(data);
        head = temp;
        tail = temp;
    }

    else
    {
        node *cur = new node(data);
        int count = 1;
        node *temp = head;

        while (count != pos - 1)
        {
            temp = temp->next;
            count++;
        }

        cur->next = temp->next;
        temp->next = cur;
    }
}

// DELETION:

void dlt_pos(node *&head, int pos)
{
    if (pos == 1)
    {
        node *to = head;
        head = head->next;
        to->next = NULL;
        delete to;
    }

    else
    {
        node *cur = head;
        node *pre = NULL;
        int c = 1;

        while (c < pos)
        {
            pre = cur;
            cur = cur->next;
            c++;
        }
        pre->next = cur->next;
        cur->next = NULL;
        delete cur;
    }
}

void dlt_value(node *&head, int data)
{
    if (head->data == data)
    {
        node *to = head;
        head = head->next;
        delete to;
    }

    // else if(head == NULL)
    // {
    //     node* to = head;
    //     head = head->next;
    //     to->next = NULL;
    //     delete to;
    // }

    else
    {
        node *temp = head;

        while (temp->next->data != data)
        {
            temp = temp->next;
        }

        node *to = temp->next;
        temp->next = temp->next->next;
        delete to;
    }
}

// REVERSE:

node *rev(node *&head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *prev = NULL;
    node *cur = head;
    node *frwd = NULL;

    while (cur != NULL)
    {
        frwd = cur->next;
        cur->next = prev;
        prev = cur;
        cur = frwd;
    }
    return prev;
}

// MIDDLE:

node *getMid(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    if (head->next->next == NULL)
    {
        return head->next;
    }

    node *slow = head;
    node *fast = head->next;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
    }
    slow = slow->next;
}

node *kReverse(node *&head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }

    node *next = NULL;
    node *curr = head;
    node *prev = NULL;
    int count = 0;

    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if (next != NULL)
    {
        head->next = kReverse(next, k);
    }

    return prev;
}

bool search(node *&head, int key)
{
    node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void print(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        InsertAtTail(head, tail, d);
    }

    print(head);

    InsertAtPos(head, tail, 6, 3);

    print(head);

    cout << search(head, 7) << endl;

    dlt_pos(head, 3);

    print(head);

    dlt_value(head, 2);
    print(head);

    // node *r = rev(head);
    // print(r);
    cout<<getMid(head)->data<<endl;
    node* k = kReverse(head,2);
    print(k);
}