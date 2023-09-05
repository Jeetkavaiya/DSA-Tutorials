#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int *a;
    int size;

    int front;
    int rear;

    Queue(int size)

    {
        this->size = size;
        a = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data)
    {
         
        if ((rear - front == size - 1) || front == rear + 1) // or(front==0 && rear=size-1)
        {
            cout << "QUEUE IS FULL" << endl;
            return;
        }

        if (rear < size - 1)
        {
            rear++;
        }

        else
        {
            rear = 0;
        }

        a[rear] = data;

        if (front == -1)
        {
            front = 0;
        }
    }

    void pop()
    {
        if (front == -1)
        {
            cout << "QUEUE IS EMPTY" << endl;
            return;
        }

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }

        else
        {
            if (front == size - 1)
            {
                front = 0;
            }
            else
            {
                front++;
            }
        }
    }

    int display()
    {
        if (front == -1)
        {
            cout << "QUEUE IS EMPTY" << endl;
            return -1;
        }

        return a[front];
    }
};

int main()
{
    Queue q(5);
    q.push(2);
    q.push(4);
    q.push(3);

    cout << q.display() << endl;
    q.push(5);
    q.push(7);

    q.pop();
    q.push(8);

    for(int i=0;i<5;i++)
    {
        cout<<q.display()<<" ";
    }
}