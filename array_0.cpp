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

void reverse_arr(int a[],int n,int x)
{
      
    int t;
    for(int i=0;i<(n-x-1)/2;i++)
    {
        t=a[x+i+1];
        a[x+1+i]=a[n-1-i];
        a[n-1-i]=t;
    }
}

void print_array(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main() {
	
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int x;
    cout<<"enter the position after \n";
    cin>>x;

    cout<<"the original array\n";
    print_array(a,n);
    reverse_arr(a,n,x);
    cout<<"\nthe array after reversing\n";
    print_array(a,n);
	
	return 0;
}
