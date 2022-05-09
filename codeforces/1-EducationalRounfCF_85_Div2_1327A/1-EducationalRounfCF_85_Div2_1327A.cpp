///*******************************THINK TWICE CODE ONCE*******************************///
#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
/*
       Author: Alaa Elsanteel

*/

int main()
{
    //freopen("nearest.i","r",stdin);
    fast;
   int t;
    cin>>t;
    while(t--)
    {
        int n;
        ll k;
        cin>>n>>k;
        (k*k<=n&&n%2==k%2)?cout<<"YES":cout<<"NO";
        cout<<endl;
    }

    return 0;
}

