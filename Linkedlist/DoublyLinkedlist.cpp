#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data" << " " << val << endl;
    }
};

// INSERTION:

void InsertAtHead(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        node *temp = new node(data);
        head = temp;
        tail =temp;
    }
    else
    {
        node *temp = new node(data);
        temp->next = head;
        head->prev = temp;
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
        temp->prev = tail;
        tail = temp;
    }
}

void InsertAtPos(node *&head, node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        InsertAtHead(head, tail, data);
        return;
    }

    node *temp = head;
    int count = 1;

    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    // inserting at last position
    if (temp->next == NULL)
    {
        InsertAtTail(head, tail, data);
        return;
    }

    node *nodeToInsert = new node(data);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

// DELETION:

void deletenode_pos(node *&head, int pos)
{
    if (pos == 1)
    {
        node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        node *cur = head;
        node *prev = NULL;

        int cnt = 1;
        while (cnt < pos)
        {
            prev = cur;
            cur = cur->next;
            cnt++;
        }

        cur->prev = NULL;
        prev->next = cur->next;
        cur->next = NULL;

        delete cur;
    }
}

int getlength(node *&head)
{
    int len = 0;
    node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}

// traversing a linkedlist:
void print(node *&head)
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

    print(head);

    InsertAtHead(head, tail, 11);
    print(head);

    InsertAtHead(head, tail, 13);
    print(head);

    InsertAtHead(head, tail, 8);
    print(head);

    InsertAtTail(head, tail, 25);
    print(head);

    InsertAtPos(head, tail, 2, 100);
    print(head);

    InsertAtPos(head, tail, 1, 101);
    print(head);

    InsertAtPos(head, tail, 7, 102);
    print(head);

    deletenode_pos(head, 7);
    print(head);

    return 0;
}