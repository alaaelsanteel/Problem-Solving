#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
/*
         Author: Alaa Elsanteel
         idea: he gave us the right name and the server ip address and then gives us a name with an ip connected to a semicolon
         all we've to do is to search for the name of the the ip giving to us if you found it print name ip; #nameOfTheIp

*/
int main()
{
    fast;

 int n,m;
cin>>n>>m;
 string s[n],s2[n];
 loop(n)
 {
     cin>>s[i]>>s2[i];
    s2[i]+=';';
 }

 string x,y;
 while(m--)
 {
     cin>>x>>y;
     loop(n)
     {
        if(s2[i]==y)
        {
            cout<<x<<" "<<y<<" #"<<s[i]<<endl;
            break;
        }
     }
 }
      return 0;

}
