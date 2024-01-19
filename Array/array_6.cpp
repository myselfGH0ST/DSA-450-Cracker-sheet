#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>
#include <string.h>
#include <sstream>
#include <map>
#include <unordered_map>
#define ll long long
#define inmax INT_MAX
#define llmax LONG_LONG_MAX
#include<iostream>
#include<algorithm>
#pragma GCC optimize("Ofast")
using namespace std;

int main()
{
    int a[]={1,2,3,4,5,6};
    int k=2,c=0;
    int n=sizeof(a)/sizeof(a[0]);
    int b[n];

    for(int i=k;i<n;i++)
    {
        b[c]=a[i];
        c++;
    }
    for(int i=0;i<k;i++)
    {
        b[c]=a[i];
        c++;
    }

    for(int i=0;i<n;i++)
    cout<<b[i]<<" ";
}