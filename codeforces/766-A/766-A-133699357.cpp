#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("password.in","r",stdin))
 string s,a;
 cin>>s>>a;

if(s==a)
    cout<<"-1";
 else 
 cout<<max(s.size(),a.size());
 
return 0;

}