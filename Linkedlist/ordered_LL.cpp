#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node{
    public :
    node* next;
    int data;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void insert_order(int data,node* &head)
{
    node* temp = new node(data);

    if(head == NULL)
    {
        head = temp;
        return;
    }

    else
    {
        if(temp->data <= head->data)
        {
            temp->next = head;
            head = temp;
            return;
        }

        else
        {
            node* cur = head;
            node* pre = NULL;

            while(temp->data > cur->data)
            {
                cur = cur->next;
                pre = cur;

                if(cur->next == NULL)
                {
                    break;
                }
            }

            temp->next = pre->next;
            pre->next = temp;
        }
    }
}

void print(node* head)
{
    node* temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void insert(int val,node* head){
    node* newNode = new node(val);

    if(head == NULL){
        head = newNode;
        return;
    }
    node* temp = head;
     
    if(temp->data > val){
        newNode->next = temp; 
        head = temp;
    }
    // 5 6 7 8   10
    node* prev = NULL;
    while(temp->data < val and temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }
    if(temp->next == NULL){
        temp->next = newNode;
        return;
    }
    prev->next = newNode;
    newNode->next = temp;

}

int main()
{
    node* head = NULL;

    int n; cin>>n;

    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;

        insert(d,head);
    }

    print(head);
    return 0;
}

