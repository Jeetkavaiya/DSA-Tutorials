// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int a[100];
//     int i=0;
//     while(n>0)
//     {
//         a[i]=n%10;
//         i++;
//         n/=10;
//     }
//     for(int j=i-1;j>=0;j--)
//     {
//         switch(a[j])
//         {
//             case 0 :
//             {
//                 cout<<"zero"<<" ";
//                 break;
//             }
//             case 1 :
//             {
//                 cout<<"one"<<" ";
//                 break;
//             }
//             case 2 :
//             {
//                 cout<<"two"<<" ";
//                 break;
//             }
//             case 3 :
//             {
//                 cout<<"three"<<" ";
//                 break;
//             }
//             case 4 :
//             {
//                 cout<<"four"<<" ";
//                 break;
//             }
//             case 5 :
//             {
//                 cout<<"five"<<" ";
//                 break;
//             }
//             case 6 :
//             {
//                 cout<<"six"<<" ";
//                 break;
//             }
//             case 7 :
//             {
//                 cout<<"seven"<<" ";
//                 break;
//             }
//             case 8 :
//             {
//                 cout<<"eight"<<" ";
//                 break;
//             }
//             case 9 :
//             {
//                 cout<<"nine"<<" ";
//                 break;
//             }
//         }
//     }
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void SayDigit(int n, string arr[])
{
    // base case
    if (n == 0)
        return;

    // processing
    int digit = n % 10;
    n = n / 10;

    // recursive call
    SayDigit(n, arr);

    cout << arr[digit] << " ";
}

int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    SayDigit(n, arr);

    return 0;
}