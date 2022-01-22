#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;

int main()
{
  fast;
string s;
cin>>s;
ll x,p=1,sum=0;
for(ll i=s.size()-1;i>=0;i--)
{
    if(s[i]=='7')
            x=pow(2,p);

    else
      x=pow(2,p)-pow(2,p-1);

        p++;
        sum+=x;
}
cout<<sum;


      return 0;

}