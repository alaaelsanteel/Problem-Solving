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
int n,m;
  cin>>n>>m;
  int a[n][m];
  bool tw=false;
  loop(n)
  {
      for(int j=0;j<m;j++)
      {
          cin>>a[i][j];
          if(((i==0||j==0)&&a[i][j]==1)||((i==n-1||j==m-1)&&a[i][j]==1))
              tw=true;
      }
  }
  if(tw)
    cout<<2;
    else
        cout<<4;
    return 0;
}
