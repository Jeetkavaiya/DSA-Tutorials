#include <iostream>
#include <bits/stdc++.h>
using namespace std;

queue<int> modifyQueue(queue<int> &q, int k)
{
    stack<int> s;
    for (int i = 0; i < k; i++)
    {
        int val = q.front();
        q.pop();
        s.push(val);
    }

    while (!s.empty())
    {
        int val = s.top();
        s.pop();
        q.push(val);
    }

    int t = q.size() - k;
    while (t--)
    {
        int val = q.front();
        q.pop();
        q.push(val);
    }
    return q;
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

    modifyQueue(q, 4);

    while (!q.empty())
    {
        int ans = q.front();
        q.pop();
        cout << ans << " ";
    }
    return 0;
}