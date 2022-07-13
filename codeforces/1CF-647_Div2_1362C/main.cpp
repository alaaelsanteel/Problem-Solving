///*******************************THINK TWICE CODE ONCE*******************************///
///*******************************NO CODE NO FOOD*******************************///
#define _USE_MATH_DEFINES
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
    //freopen("magical.in", "r", stdin);
    //freopen("output.txt","w",stdout);
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=0;
        loop(60)
        {
            if(n & (1ll << i))
                ans+=(1ll << (i+1))-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}

