#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sortedStack(stack<int> &st, int num)
{
    if (st.empty() || (!st.empty() && st.top() < num))
    {
        st.push(num);
        return;
    }

    int n = st.top();
    st.pop();

    sortedStack(st, num);
    st.push(n);
}

void sortStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    int num = st.top();
    st.pop();

    sortStack(st);

    sortedStack(st, num);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(25);
    st.push(5);
    st.push(100);
    st.push(4);

    sortStack(st);

    while (!st.empty())
    {
        int ans = st.top();
        st.pop();
        cout << ans << " ";
    }

    return 0;
}