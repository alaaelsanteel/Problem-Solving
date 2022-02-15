#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
/*
         Authuer :Alaa Elsanteel
         idea: your counting the number of shops you can buy from so the price must be less or equal to the money you have
         so I used the ubber_bound to return the index of the number your searching for or the closest one to it
         if all the element in the range  less than the number you're searching for, the function returns  the index of the last.

*/

int main()
{
    fast;
    int n;
 cin>>n;
 int a[n];
 loop(n)
 cin>>a[i];
 sort(a,a+n);
    int t,x,b;
    cin>>t;
    while(t--)
    {
        cin>>b;
        x=upper_bound(a,a+n,b)-a;
        cout<<x<<endl;

    }
      return 0;

}
