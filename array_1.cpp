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
    int a[]={1,2,3,4,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);

    int x=a[0],y=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>x)
        x=a[i];
        if(a[i]<y)
        y=a[i];
    }

    cout<<"the max is "<<x<<endl;
    cout<<"the min is "<<y<<endl;
    cout<<"the sum of min and max is "<<(x+y)<<endl;

    return 0;
}