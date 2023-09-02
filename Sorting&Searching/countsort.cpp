#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mx = a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>mx)
        {
            mx = a[i];
        }
    }  
    int count[1000]={0};
    for(int i=0;i<n;i++)
    {
        count[a[i]]++;
    }
    for(int i=1;i<=mx;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    int out[n];
    for(int i=n-1;i>=0;i--)
    {
        out[--count[a[i]]] = a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<out[i]<<" ";
    }
    return 0;
}