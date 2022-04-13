///*******************************THINK TWICE CODE ONCE*******************************///
///*******************************NO CODE NO FOOD*******************************///
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
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt","w",stdout);
    fast;
int n,c;
cin>>n>>c;
int a[n];
loop(n)
cin>>a[i];
int x,ans=0;
loop(n-1)
{
    x=a[i]-a[i+1]-c;
    ans=max(ans,x);

}

    cout<<ans;

    return 0;
}
