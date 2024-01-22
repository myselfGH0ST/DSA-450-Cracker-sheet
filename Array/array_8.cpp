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

void sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
}

int main()
{

    int a[] = {10, 4, 20, 19, 9, 4, 20, 14, 15, 10, 9, 15, 8};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 9;

    sort(a, n);
    int tmin = a[0];
    int tmax = a[n - 1];
    int s = tmax - tmin;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] - k) < 0)
            continue;

        tmin = min(a[0] + k, a[i] - k);
        tmax = max(a[n - 1] - k, a[i - 1] + k);

        s = min(s, tmax - tmin);
    }

    cout << "the min diff is " << s;
    return 0;
}