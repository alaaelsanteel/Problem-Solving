#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
int main()
{
    fast;
   int n;
   cin>>n;
   int price=INT_MAX,p,a,total=0;
  while(n--)
{
    cin>>a>>p;
    if(price>p)
        price=p;
    total+=price*a;
}
cout<<total;

    return 0;

}