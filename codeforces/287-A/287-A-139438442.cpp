#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;

int main()
{
    string s[4],ss,ss1;
    loop(4)
      cin>>s[i];
      bool can=false;
      loop(3)
      {
          ss=s[i];
          ss1=s[i+1];
       for(int j=0;j<3;j++)
       {
           if(ss[j]!=ss[j+1])
           {
               if(ss1[j]==ss1[j+1])
                can=true;
           }
           else if(ss[j]==ss[j+1])
           {
               if(ss1[j]==ss[j]||ss1[j+1]==ss[j])
               can=true;
           }
       }
      }
      if(can)
        cout<<"YES";
      else
        cout<<"NO";
        return 0;

}