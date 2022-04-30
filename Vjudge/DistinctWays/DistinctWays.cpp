///*******************************THINK TWICE CODE ONCE*******************************///
///*******************************NO CODE NO FOOD*******************************///
#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
ll fi[100001];
/*
        Author: Alaa Elsanteel
*/
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt","w",stdout);
    fast;
    int n,k;
cin>>n>>k;
ll sumn=1,sumk=1,sumr=1;
int x=n,r=n-k;
loop(n)
{
    if(x!=0)
    sumn*=(x--);
    if(r!=0)
    sumr*=(r--);
    if(k!=0)
        sumk*=(k--);
}
cout<< sumn/(sumr*sumk)<<" "<<sumn/sumr;

    return 0;
}
