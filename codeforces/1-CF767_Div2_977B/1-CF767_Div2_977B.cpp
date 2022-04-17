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

int t;
cin>>t;
while(t--)
{
    int l,r,k;
    cin>>l>>r>>k;
     ll x=0;
    if(l==r&& l==1)
        cout<<"NO"<<endl;
    else if(l==r)
        cout<<"YES"<<endl;
    else
    {
        if(l%2!=0 &&r%2!=0)
            x=1;
         x+= (r-l +1)/2;
        if(x<=k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

    return 0;
}
