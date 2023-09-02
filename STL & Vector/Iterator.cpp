#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*int main()
{
    vector<int> v={2,3,4,5,6};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>::iterator it=v.begin();
    for(it=v.begin();it!=v.end();++it)
    {
        cout<<(*it)<<endl;
    }
}*/

/*int main()
{
    vector<int> v = {2, 3, 4, 5, 6};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
    vector<pair<int, int>>::iterator it;
    for (it = v_p.begin(); it != v_p.end(); ++it)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
}*/

// ITERATOR code in short range based loop and auto keyword:
int main()
{
    vector<int> v = {2, 3, 4, 5, 6};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int>::iterator it = v.begin();
    for (it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it) << " ";
    }
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}};
    for (int value : v) // for(pair<int,int>&value:v_p)
                        //  {
                        //  cout<<value.first<<" "<<value.second<<endl;
                        //  }    
    {
        cout << value << " ";
        
    }
    cout << endl;
    auto a=1;
    cout<<a<<endl;
   
}