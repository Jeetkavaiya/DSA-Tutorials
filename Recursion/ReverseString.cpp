#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(string &s, int i, int j)
{
    // base case
    if (i > j)
    {
        return;
    }

    swap(s[i], s[j]);
    i++;
    j--;

    reverse(s, i, j);
}

int main()
{
    string s;
    cin >> s;

    reverse(s, 0, s.length() - 1);
    cout << s << endl;
    return 0;
}