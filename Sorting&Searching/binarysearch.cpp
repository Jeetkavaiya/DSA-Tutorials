#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Time complexity: O(logn)

int binarysearch(int a[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int key, n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter key:";
    cin >> key;
    cout << binarysearch(a, n, key) << endl;
    return 0;
}