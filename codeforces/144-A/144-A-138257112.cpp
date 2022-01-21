#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
int main()
{

    fast;

int n;
cin>>n;
int arr[n];
loop(n)
cin>>arr[i];
int x =*max_element(arr,arr+n);
int y=*min_element(arr,arr+n);
int indx=0;
loop(n)
{
   if(arr[i]==x)
   {
       indx+=i;
       //out<<indx;
       break;
   }
}
for(int i=n-1;i>=0;i--)
{
    if(arr[i]==y)
    {
        if(indx>i)
            indx-=1;
        indx+=n-(i+1);
        break;
    }
}
cout<<indx;
    return 0;

}