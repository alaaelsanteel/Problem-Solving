///*******************************THINK TWICE CODE ONCE*******************************///
#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
/*
       Author: Alaa Elsanteel

*/
ll sum(ll n)
{
	return (n * (n+1)) / 2;
}

ll sum(ll l, ll r)
{
	if(l <= 1)
		return sum(r);

	return sum(r) - sum(l-1);
}

ll pipesum(ll k, ll n)
{
	ll l = 1, r = k;

	while(l < r)
	{
		ll mid = (r + l)/2;
		ll su = sum(mid, k);

		if(su == n)
			return k - mid + 1;

		if(su > n)
			l = mid+1;
		else
			r = mid;
	}

	return k - l + 2;
}

int main()
{
    //freopen("nearest.i","r",stdin);
    fast;
  ll n,k;
cin>>n>>k;
ll su=0;
if(n==1)
    cout<<"0";
else if(k>=n)
    cout<<1;
else
{
    n--;
    k--;
    su=sum(k);
    if(su<n)
        cout<<-1;
        else
          cout<<pipesum(k,n);

}
    return 0;
}

