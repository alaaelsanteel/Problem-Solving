#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int  n;
double c=0;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       c+=arr[i];
   }
  cout<<fixed<<showpoint<<setprecision(12)<<(c/n);
    return 0;
}