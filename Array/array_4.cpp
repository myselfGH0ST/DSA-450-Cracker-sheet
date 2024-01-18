#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>
#include <string.h>
#include <sstream>
#include <map>
#include <unordered_map>
#include <vector>
#define ll long long
#define inmax INT_MAX
#define llmax LONG_LONG_MAX
#include <iostream>
#include <algorithm>
#pragma GCC optimize("Ofast")
using namespace std;

void arrange(int arr[], int n)
{
    int a[n], x = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            a[x] = arr[i];
            x++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            a[x] = arr[i];
            x++;
        }
    }
    for (int i = 0; i < n; i++)
        arr[i] = a[i];
}

void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
int main()
{
    int a[] = {1, -1, 3, 2, -7, -5, 11, 6};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "original array\n";
    print_array(a, n);
    arrange(a, n);
    cout << "\nArray after arranging\n";
    print_array(a, n);
    return 0;
}

// void arrange(int arr[], int n)
// {
//     int  k = n - 1, temp;

//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (arr[i] < 0)
//         {
//             temp = arr[i];
//             for (int j = i + 1; j <= k; j++)
//             {
//                 arr[j - 1] = arr[j];
//             }
//             arr[k] = temp;
//             k--;
//         }
//     }
// }