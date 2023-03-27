///*******************************THINK TWICE CODE ONCE*******************************///
///*******************************NO CODE NO FOOD*******************************///
#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <cstdlib>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
//int f[10000001];
//vector<int>a[100001];
int dis[100001];

int main()
{
    //freopen("team.in", "r", stdin);
    //freopen("output.txt","w",stdout);
    fast;
int n;
cin>>n;
int a[n];
loop(n)
cin>>a[i];
sort(a,a+n);
int l=0,r=n-1,mn=INT_MAX;
while(l<=r)
{
    mn=min(mn,abs(a[l]+a[r]));
    if(abs(a[l])>abs(a[r]))
    {
        l++;
    }
    else
        r--;

}
cout<<mn;


    return 0;
}
