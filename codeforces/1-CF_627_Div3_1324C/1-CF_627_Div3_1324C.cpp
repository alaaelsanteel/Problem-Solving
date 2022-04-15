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
    string s;
    cin>>s;
    int ans=0,l=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='L')
            l++;
        else
          l=0;

            ans=max(l,ans);
    }
    cout<<ans+1<<endl;
}
    return 0;
}
