#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
int main()
{
    fast;

    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int mil =(k*l)/nl;
    int limes =c*d;
    int salt =p/np;
    int x=min(mil,limes);
    int y=min(x,salt);
    cout<<y/n;

    return 0;

}