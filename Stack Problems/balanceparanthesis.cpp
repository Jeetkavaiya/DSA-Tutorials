// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// unordered_map<char, int> symbols = {{'[', -1}, {'(', -2}, {'{', -3}, {']', 1}, {')', 2}, {'}', 3}};
// string isbalanced(string s)
// {
//     stack<char> st;
//     for (char bracket : s)
//     {
//         if (symbols[bracket] < 0)
//         {
//             st.push(bracket);
//         }
//         else
//         {
//             if (st.empty())
//             {
//                 return "NO";
//             }
//             char top = st.top();
//             st.pop();
//             if (symbols[top] + symbols[bracket] != 0)
//             {
//                 return "NO";
//             }
//         }
//     }
//     if (st.empty())
//     {
//         return "YES";
//     }
//     return "NO";
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         cout << isbalanced(s) << endl;
//     }

//     return 0;
// }


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(st.empty())
        {
            st.push(s[i]);
        }
        else if((st.top()=='(' && s[i]==')') || (st.top()=='{' && s[i]=='}') || (st.top()=='[' && s[i]==']'))
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    if(st.empty())
    {
        cout<<"balanced";
    }
    else
    {
        cout<<"not";
    }
    return 0;
}