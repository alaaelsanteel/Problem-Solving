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

    fast;

int n,k;
    cin>>n>>k;
    int a[n];
    vector<int>b(n);
    loop(n)
    {
        cin>>b[i];
        a[i]=b[i];
    }
    string s;
    cin>>s;
    int r=0,last=0;
    ll ans=0;
    for(int i=0;i<n;i=r)
    {
        while(r<n &&s[i]==s[r])
            r++;

        sort(b.begin() + i, b.begin() + r);
       reverse(b.begin()+i , b.begin()+r);

        last=min(r,k+i);

        for(int j=i;j<last;j++)
        {

            ans +=b[j];
        }

    }
    cout<<ans;
    return 0;
}

