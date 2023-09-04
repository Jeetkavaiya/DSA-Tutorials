#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &s,int size,int count)
{
    if(count==size/2)
    {
        s.pop();
        return;
    }
    int num=s.top();
    s.pop();
    count+=1;

    solve(s,size,count);
    s.push(num);
}

void del(stack<int> &s,int size)
{
    int count=0;
    solve(s,size,count);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);

    del(s,s.size());

   while(!s.empty())
   {
        int ans=s.top();
        s.pop();
        cout<<ans<<" ";
   }

    return 0;
}