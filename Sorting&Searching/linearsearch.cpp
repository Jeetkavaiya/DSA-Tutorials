#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int linearsearch(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter no of elements in array: ";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int key;
    cout << "Enter key: ";
    cin >> key;

    cout << linearsearch(a, n, key);
    return 0;
}