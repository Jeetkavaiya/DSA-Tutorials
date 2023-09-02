// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter number of elements you want to enter:";
//     cin >> n;
//     int a[n];
//     cout << "Elements:" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int counter=1;
//     while(counter<n)
//     {
//         for(int i=0;i<n-counter;i++)
//         {
//             if(a[i]>a[i+1])
//             {
//                 int tmp=a[i];
//                 a[i]=a[i+1];
//                 a[i+1]=tmp;
//             }
//         }
//         counter++;
//     }

// cout<<"Elemnets in Bubble sort:"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

// Bubble sort Using Recursion:
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    bubblesort(arr, n - 1);
}

int main()
{
    int arr[5] = {2, 5, 1, 6, 9};

    bubblesort(arr, 5);
    cout << "Sorted Array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}