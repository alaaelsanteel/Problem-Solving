///*******************************THINK TWICE CODE ONCE*******************************///
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

    fast;
int n,m;
cin>>n>>m;
ll a[n],b[m];
loop(n)
  cin>>a[i];
loop(m)
  cin>>b[i];
  ll sum=a[0];
  int c=0;
  loop(m)
  {
      //cout<<sum<<" ";
      while(b[i]>sum)
      {
          sum+=a[++c];
      }
//cout<<sum<<endl;
    cout<<c+1<<" "<<abs(abs(b[i]-sum)-a[c])<<endl;

  }
    return 0;
}

