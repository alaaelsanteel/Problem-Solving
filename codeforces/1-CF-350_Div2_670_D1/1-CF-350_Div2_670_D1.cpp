///*******************************THINK TWICE CODE ONCE*******************************///
#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;

int main()
{
    fast;

    int n,m;
    cin>> n >> m;
    int a[n],b[n];
    loop(n)
       cin>>a[i];
    loop(n)
       cin>>b[i];
    int c=0;
    int x=20000;
  while(m>=0)
 {
      loop(n)
      {
          if(a[i]<=b[i])
          {
              b[i]-=a[i];
          }
          else
          {
              m = m-(a[i]-b[i]);
              b[i]=0;
          }
      }
          if(m>=0)
            c++;
        // else
          //  break;
  }
  cout<<c;

    return 0;
}
