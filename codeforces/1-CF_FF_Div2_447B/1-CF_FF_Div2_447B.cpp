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
string s;
cin>>s;
int t;
cin>>t;
int a[26];
loop(26)
cin>>a[i];
ll ans=0;
loop(s.size())
     {
         ans+= ((i+1)*a[s[i]-'a']);
     }
     sort(a,a+26);
     reverse(a,a+26);
     loop(t)
     {
         ans+=((s.size()+1+i)*a[0]);
     }

    cout<<ans;
    return 0;
}
