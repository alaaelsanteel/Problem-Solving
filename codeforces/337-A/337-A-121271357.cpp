#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
int n,k,a=0;
cin>>n>>k;
int arr[k];
for(int i=0;i<k;i++)
{
    cin>>arr[i];
}

sort(arr,arr+k);

a=arr[k-1]-arr[0];
for(int i=n;i<=k;i++)
{

   a=min (a, arr[i-1]-arr[i-n]);
}


cout<<abs(a);
    return 0;
}