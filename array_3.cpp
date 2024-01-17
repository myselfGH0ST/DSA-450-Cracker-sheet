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

void sort(int arr[], int n)
{
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            a++;
        if (arr[i] == 1)
            b++;
        if (arr[i] == 2)
            c++;
    }
    for (int i = 1; i<=n; i++)
    {
        if (i<= a)
            cout << "0"<< " ";
        else if (i<= a + b)
            cout << "1"<< " ";
        else
            cout << "2"<< " ";
    }
}

void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {0,1,2,1,2,1,2};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "the original array\n";
    print_array(a, n);
    
    cout << "\nthe array after sorting\n";
    sort(a, n);
    return 0;
}