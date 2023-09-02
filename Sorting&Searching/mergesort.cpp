#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int start, int end)
{
    int mid = (start + end) / 2;

    int L1 = mid - start + 1;
    int L2 = end - mid;

    int left[L1], right[L2];

    // copy values in new array
    int l = start;
    for (int i = 0; i < L1; i++)
    {
        left[i] = a[l++];
    }

    int r = mid + 1;
    for (int i = 0; i < L2; i++)
    {
        right[i] = a[r++];
    }

    // merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
    int mainindex = start;

    while (index1 < L1 && index2 < L2)
    {
        if (left[index1] < right[index2])
        {
            a[mainindex++] = left[index1++];
        }
        else
        {
            a[mainindex++] = right[index2++];
        }
    }

    // copy first array's element
    while (index1 < L1)
    {
        a[mainindex++] = left[index1++];
    }

    // copy second array's element
    while (index2 < L2)
    {
        a[mainindex++] = right[index2++];
    }

    // free memory
    // delete[] left;
    // delete[] right;
}

void mergesort(int a[], int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;

    // left part sorting
    mergesort(a, start, mid);

    // right part sorting
    mergesort(a, mid + 1, end);

    // merge
    merge(a, start, end);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mergesort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}