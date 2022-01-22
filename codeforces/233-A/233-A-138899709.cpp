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
{
    arr[i]=i+1;
}
for(int i=0;i<n;i+=2)
{
    if(i==n-1)
        break;
        else
    swap(arr[i],arr[i+1]);

}
if(n%2!=0)
    cout<<"-1";
else
    {
loop(n)
cout<<arr[i]<<" ";
    }

    return 0;

}