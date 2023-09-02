#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isSorted(int a[], int size)
{
    // base case
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (a[0] > a[1])
    {
        return false;
    }
    else
    {
        bool remainingPart = isSorted(a + 1, size - 1);
        return remainingPart;
    }
}

int main()
{
    int a[5] = {2, 6, 4, 8, 9};
    int size = 5;

    bool ans = isSorted(a, size);

    if (ans)
    {
        cout << "Array is sorted" << endl;
    }
    else
        cout << "Array is not sorted" << endl;
    return 0;
}
