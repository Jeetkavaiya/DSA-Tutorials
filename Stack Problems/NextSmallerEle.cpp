#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> &v,int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=n-1;i>=0;i--)
    {
        int curr=v[i];
        while(s.top()>=curr)
        {
            s.pop();
        }
        
        ans[i]=s.top();
        s.push(curr);
    }
    return ans;
}

int main()
{
    vector<int> v;
    int n;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

    int ans=nextSmallerElement(v);

    while(!v.empty())
    {
        v.pop_back();
        cout<<ans<<" "<<endl;
    }
    return 0;
}