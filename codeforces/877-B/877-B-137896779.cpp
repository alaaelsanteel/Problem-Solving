#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
int pref_a [5002];
int pref_b [5002];
int main()
{

    fast;
 string s;
 cin>>s;
 loop(s.size())
 {
     if(s[i]=='a')
        pref_a[i+1]=pref_a[i]+1;
     else
        pref_a[i+1]=pref_a[i];
     if(s[i]=='b')
        pref_b[i+1]=pref_b[i]+1;
      else
        pref_b[i+1]=pref_b[i];
 }
 int ans=0;
 for(int i=0;i<=s.size();i++)
 {
     for(int j=i;j<=s.size();j++)
     {
         //aaa(i j)aaaa(s.size())
         int x=pref_a[s.size()]-pref_a[j]+pref_a[i]; //over all a - pref_a ely m3aya + pref_a ll bdaya
         int y= pref_b[j]-pref_b[i];
        ans= max(ans,x+y);
     }
 }
 cout<<ans;

    return 0;

}