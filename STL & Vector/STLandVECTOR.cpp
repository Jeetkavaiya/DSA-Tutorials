// Pair:

/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,string> p;
    //p=make_pair(2,"abc");
    p={2,"abc"};
    cout<<p.first<<" "<<p.second<<endl;
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int>p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
}*/

// VECTOR:
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v)
{
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        // v.size()-> O(1)
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     printVec(v);
    //     v.push_back(x); // Time comp:O(1)
    // }
    // printVec(v);
    v.push_back(7);
    v.push_back(6);
    // printVec(v);
    // v.pop_back();
    // printVec(v);

    vector<int> v2 = v; // O(n) //<- copy of vector
    v2.push_back(5);
    printVec(v);
    printVec(v2);
    return 0;
}