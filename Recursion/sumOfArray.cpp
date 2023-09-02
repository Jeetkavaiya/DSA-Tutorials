#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getsum(int *arr, int size)
{
    if (size == 0)
    {
        return 0;
    }

    if (size == 1)
    {
        return arr[0];
    }

    int remainingpart = getsum(arr + 1, size - 1);
    int sum = arr[0] + remainingpart;
    return sum;
}

int main()
{
    int arr[5] = {2, 4, 9, 9, 9};
    int size = 5;

    int sum = getsum(arr, size);

    cout << "Sum is " << sum << endl;
    return 0;
}