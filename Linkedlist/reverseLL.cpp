#include<iostream>
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

node* reverseLL(node* &head)
{
    node* prev=NULL;
    node* cur=head;
    node* frwd=NULL;

    while(cur!=NULL)
    {
        frwd=cur->next;
        cur->next=prev;
        prev=cur;
        cur=frwd;
    }
    return prev;
}
