// Ascending sorting

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, j;
//     cout << "Enter number of elements you want to enter:";
//     cin >> n;
//     int a[n];
//     cout << "Elements:" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     for (int j = 0; j < n; j++)
//     {
//         for (int i = j + 1; i < n; i++)
//         {
//             if (a[j] > a[i])
//             {
//                 int tmp = a[j];
//                 a[j] = a[i];
//                 a[i] = tmp;
//             }
//         }
//     }

//     cout << "Elements in ascending order:";
//     for (int i = 0; i < n; i++)
//     {
//         cout << " " << a[i];
//     }

//     return 0;
// }


//Decending order:
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, j;
    cout << "Enter number of elements you want to enter:";
    cin >> n;
    int a[n];
    cout << "Elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int j = 0; j < n; j++)
    {
        for (int i = j + 1; i < n; i++)
        {
            if (a[j] < a[i])
            {
                int tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }

    cout << "Elements in decending order:";
    for (int i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }

    return 0;  
}