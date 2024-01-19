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
    int a[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(a)/sizeof(a[0]);
    int s=0,m=INT_MIN;

    for(int i=0;i<n;i++)
    {
        s+=a[i];
        m=max(m,s);
        if(s<0)
        s=0;
    }

    cout<<"max subarray sum is"<<m;

    return 0;
}