/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define n 100

class que
{
    int *a;
    int front;
    int back;

public:
    que()
    {
        a = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue overflow" << endl;
            return;
        }
        back++;
        a[back] = x;
        if (front == -1)
        {
            front++;
        }
    }

    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements in queue" << endl;
            return;
        }
        front++;
    }

    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements in queue" << endl;
            return -1;
        }
        return a[front];
    }

    bool empty()
    {
        if (front == -1 || front > back)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    return 0;
}*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Queue
{
    int *a;
    int size;
    int front;
    int rear;

public:
    Queue()
    {
        this->size = size;
        a = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data)
    {
        if (rear == size)
        {
            cout << "queue is full" << endl;
        }
        else
        {
            a[rear] = data;
            rear++;
        }
    }
   int pop()
    {
        if (front == rear)
        {
            return -1;
        }
        else
        {
            int ans = a[front];
            a[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }
        int front(){
            if (front == rear)
            {
                return -1;
            }
            else
            {
                return a[front];
            }
        }
    
    bool isempty()
    {
        if(front=rear)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
