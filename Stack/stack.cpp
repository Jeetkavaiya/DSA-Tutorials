// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class sta
// {
//     int *a;
//     int top;
//     int size;
// public:
//     sta (int size)
//     {
//         this ->size=size;
//         a = new int[size];
//         top = -1;
//     }

//     void push(int x)
//     {
//         if (top == size - 1)
//         {
//             cout << "Stack is overflow" << endl;
//             return;
//         }
//         top++;
//         a[top] = x;
//     }

//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "No element to pop" << endl;
//             return;
//         }
//         top--;
//     }
//     int display()
//     {
//         if (top == -1)
//         {
//             cout << "No element in stack" << endl;
//             return -1;
//         }
//         return a[top];
//     }
//     bool empty()
//     {
//         return top == -1;
//     }
// };
// int main()
// {
//     sta st(5);
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     cout << st.display() << endl;
//     st.pop();
//     cout <<st.display() << endl;
//     st.pop();
//     st.pop();
//     st.pop();
//     cout << st.empty() << endl;

//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *a;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        a = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            a[top] = element;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return a[top];
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
       return false;
    }
};
int main()
{
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;
    st.pop();

    cout << st.peek() << endl;
    st.pop();

    cout << st.peek() << endl;
    st.pop();

    cout << st.peek() << endl;
    st.pop();

    return 0;
}
