///*******************************THINK TWICE CODE ONCE*******************************///
///*******************************NO CODE NO FOOD*******************************///
#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
ll fi[51];
/*
        Author: Alaa Elsanteel
*/
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt","w",stdout);
    fast;
   ll a,b,c;
    cin>>a>>b>>c;
    ll x=b-a;
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(x==0)
        {
           (n==a)?cout<<"YES":cout<<"NO";
           }
        else
        (((n-a)%x==0)&&n>=a)?cout<<"YES":cout<<"NO";
        cout<<endl;
    }
    return 0;
}
