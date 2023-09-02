/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int part(int a[], int lb, int ub)
{
    int pivot = a[lb];
    int k = lb + 1;
    int j = ub;

    for (int i = lb + 1; i <= ub; i++)
    {
        if (a[i] < pivot)
        {
            if (i != k)
            {
                swap(a[i], a[k]);
            }
            k++;
        }
    }
    a[lb] = a[k - 1];
    a[k - 1] = pivot;
    return k - 1;
}

void quick(int *a, int lb, int ub)
{
    int j;
    if (lb < ub)
    {
        j = part(a, lb, ub); 
        quick(a, lb, j - 1);
        quick(a, j + 1, ub);
    }
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
    quick(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Time complexity: O(logn) [in worst cse TC is O(n^2)]
//Space complexity: O(n)

int part(int a[], int start, int end)
{
    int pivot = a[start];
    int count = 0;

    for (int i = start + 1; i <= end; i++)
    {
        if (a[i] <= pivot)
        {
            count++;
        }
    }
    
    // place pivot at right place
    int p_i = count + start;
    swap(a[p_i], a[start]);
    
    // left and right placing
    int i = start;
    int j = end;

    while (i < p_i && j > p_i)
    {
        while (a[i] <= pivot)
        {
            i++;
        }

        while (a[j] > pivot)
        {
            j--;
        }

        if (i < p_i && j > p_i)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }

    return p_i;
}

void quicksort(int a[], int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }
    // partition
    int pivot = part(a, start, end);

    quicksort(a, start, pivot - 1);

    quicksort(a, pivot + 1, end);
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
    quicksort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}