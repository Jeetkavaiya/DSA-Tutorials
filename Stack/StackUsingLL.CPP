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

class Stack
{
public:
    node *top;
    Stack()
    {
        top = NULL;
    }

    void push(int data)
    {
        node *temp = new node(data);
        if (top == NULL)
        {
            top = temp;
        }

        else
        {
            temp->next = top;
            top = temp;
        }
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack is empty";
            return;
        }
        top = top->next;
    }

    int display()
    {
        if (top == NULL)
        {
            cout << "Stack is empty";
            return -1;
        }
        return top->data;
    }
};
int main()
{
    Stack s;
    s.push(5);
    s.push(4);
    s.push(3);

    cout << s.display() << endl;

    s.pop();

    cout << s.display() << endl;
    return 0;
}