#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

class Queue{
    public:

    node* front;
    node* back;

    Queue()
    {
        front=NULL;
        back=NULL;
    }

    void push(int data)
    {
        node*temp=new node(data);
        if(front==NULL && back==NULL)
        {
            front=temp;
            back=temp;
        }

        else
        {
            back->next=temp;
            back=temp;
        }
    }

    void pop()
    {
        if(front==NULL)
        {
            cout<<"Queue is empty";
            return;
        }
        
        front=front->next;
    }

    
};
int main()
{
    
    return 0;
}