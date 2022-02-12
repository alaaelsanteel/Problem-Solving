#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
//THINK TWICE,CODE ONCE

int main()
{
  fast;
 int n;
 cin>>n;
 string s[n];
 loop(n)
 cin>>s[i];
 map<string ,bool>ss;
 for(int i=n-1;i>=0;i--)
 {
     if(ss[s[i]]==0)
       {
    cout<<s[i]<<endl;
     ss[s[i]]=1;
       }
     else
        continue;
 }
      return 0;

}
