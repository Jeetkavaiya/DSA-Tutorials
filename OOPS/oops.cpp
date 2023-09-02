#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int age;
    bool gender;

    // void setname(string s)
    // {
    //     name = s;
    // }

// void getname()
// {
//     cout<<name<<endl; //to access member from class without using public
// }
    void printinfo()
    {
        cout << "Name:";
        cout << name << endl;
        cout << "Age:";
        cout << age << endl;
        cout << "Gender:";
        cout << gender << endl;
    }
};

int main()
{
    student a[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Name:";  // for setnsame;qa
        cin >> a[i].name; // cin>>s;
                          // a[i].setnsme(s);
        cout << "Age:";
        cin >> a[i].age;
        cout << "Gender:";
        cin >> a[i].gender;
    }
    for (int i = 0; i < 3; i++)
    {
        a[i].printinfo();
    }

    return 0;
}