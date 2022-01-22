#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
int main()
{
    fast;
int n,h;
cin>>n>>h;
int arr[n], width=0;
loop(n)
{
    cin>>arr[i];
    if(arr[i]<=h)
        width += 1;
        else
        width+=2;
}
cout<<width;

    return 0;

}