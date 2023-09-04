#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &st, int x)
{
    if (st.empty())
    {
        st.push(x);
        return;
    }

    int num = st.top();
    st.pop();
    
    solve(st, x);

    st.push(num);
}

stack<int> insertAtbottom(stack<int> &st, int x)
{
    solve(st, x);
    return st;
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    insertAtbottom(st, 6);

    while (!st.empty())
    {
        int ans = st.top();
        st.pop();
        cout << ans << " ";
    }

    return 0;
}