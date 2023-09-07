#include <iostream>
#include <bits/stdc++.h>
using namespace std;

queue<int> rev(queue<int> &q)
{
    stack<int> s;
    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        s.push(element);
    }

    while (!s.empty())
    {
        int element = s.top();
        s.pop();
        q.push(element);
    }
}

int main()
{
    queue<int> q;
    q.push(4);
    q.push(3);
    q.push(1);
    q.push(10);
    q.push(2);
    q.push(6);

    rev(q);

    while (!q.empty())
    {

        int ans = q.front();
        q.pop();
        cout << ans << " ";
    }
    return 0;
}
