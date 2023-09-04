#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertAtbottom(stack<int> &st, int x)
{
    if (st.empty())
    {
        st.push(x);
        return;
    }

    int num = st.top();
    st.pop();

    insertAtbottom(st, x);

    st.push(num);
}

void reverseStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    int num = st.top();
    st.pop();

    reverseStack(st);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    reverseStack(st);

    while (!st.empty())
    {
        int ans = st.top();
        st.pop();
        cout << ans << " ";
    }

    return 0;
}