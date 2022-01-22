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
    int arr[n],day=0,sum=0;
    loop(n)
        {
            cin>>arr[i];
            sum+=arr[i];
          int x=  min(8,sum);
          sum-=x;
          k-=x;
          day++;
          if(k<=0)
            break;
        }

    if(k<=0)
        cout<<day;
    else
        cout<<"-1";

    return 0;

}