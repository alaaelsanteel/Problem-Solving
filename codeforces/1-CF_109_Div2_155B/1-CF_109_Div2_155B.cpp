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

int n;
cin>>n;
pair<int ,int >p[n];
loop(n)
{
    cin>>p[i].first>>p[i].second;
    swap(p[i].first,p[i].second);
}
sort(p,p+n);
int c=1,j=n-1;
ll ans=0;
while(c>0&&j>=0)
{
    c+=p[j].first;
    ans+=p[j].second;
    c--;
    j--;
}
cout<<ans;

    return 0;
}
