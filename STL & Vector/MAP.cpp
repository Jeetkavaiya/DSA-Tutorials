/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}
int main()
{
    map<int, string> m;
    m[1] = "abc"; // O(log(n))
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});
    // map<int,string>::iterator it;
    // for(it=m.begin();it!=m.end();++it)
    // {
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    // return 0;
    m[6];
    print(m);
}*/

//Unordered maps:
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    unordered_map<int,string> m;
    m[1] = "abc"; // O(1)
    m[5] = "cdc";
    m[3] = "acd";
    m[6]="a";
    print(m);
}