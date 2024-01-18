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
    int a[]={1,2,4,6,8};
    int b[]={2,3,4};
    int c=0;

    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(b[j]==a[i])
            {
                c++;
                break;
            }
        }
    }

    cout<<"common elements "<<c<<endl;
    cout<<"union elements "<<((n1-c)+c+(n2-c))<<endl;
    
    return 0;
}