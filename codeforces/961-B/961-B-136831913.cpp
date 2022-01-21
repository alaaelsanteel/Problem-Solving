#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
int main()
{
    fast;
   int n,k;
   cin>>n>>k;
   vector<int>a(n);
   vector<int>b(n+1);
   vector <long long>arr(n);
   loop(n)
   cin>>a[i];
   long long sum=0;
   loop(n)
   {
       cin>>b[i];
       if(i)
        arr[i] += arr[i - 1];
		if (b[i] == 0)
		 arr[i] += a[i];
		else
		 sum += a[i];
   }
   int add=0,y;
 for(int i=k-1;i<n;++i)
   {
     if(i>=k)
  y=arr[i] -arr[i - k];
   else
    y=arr[i];

    add=max(add,y);
   }
cout<<add+sum;

    return 0;

}