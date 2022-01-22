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
int x=abs(arr[0]-arr[1]);
int indx_i=1,indx_j=2;
for(int i=1;i<n-1;i++)
{

     if(x>=abs(arr[i]-arr[i+1]))
     {
         indx_i=i+1;
         indx_j=i+2;
     }

    x=min(x,abs(arr[i]-arr[i+1]));
}

if(x>abs(arr[0]-arr[n-1]))
    cout<<n<<" 1";
else
cout<<indx_i<<" "<<indx_j;
    return 0;

}