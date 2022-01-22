#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
int freq[251];//250

int main()
{

    fast;
   int n,maxi=INT_MIN,team;
   cin>>n;
   string s[n];
 loop(n)
       cin>>s[i];
       for(int i=0;i<n;i++)
       {
           int cnt=0;
           for(int j=0;j<n;j++)
           {
            if( s[i]==s[j])
               {
                   cnt++;
               }
           }
            if(maxi<cnt)
           {
               maxi=cnt;
               team=i;
           }
       }
       cout<<s[team];

    return 0;

}