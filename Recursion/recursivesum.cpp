#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int prevsum = Sum(n - 1);
    return n + prevsum;
}
int main()
{
    int n;
    cin >> n;
    cout << Sum(n) << endl;

    return 0;
}