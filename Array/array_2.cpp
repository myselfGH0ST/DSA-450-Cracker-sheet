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

// void sort(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (a[j] > a[j + 1])
//                 swap(a[j], a[j + 1]);
//         }
//     }
// }

int main()
{
    int a[] = {8, 2, 7, 9, 5, 6, 3, 1, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int k;
    cout << "enter k\n";
    cin >> k;

    sort(a,a+n);
    cout << "\nthe " << k << "th max is " << a[n - k] << endl;
    cout << "the " << k << "th min is " << a[k - 1] << endl;
    return 0;
}

