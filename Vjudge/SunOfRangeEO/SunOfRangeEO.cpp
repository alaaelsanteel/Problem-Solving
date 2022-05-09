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

        int x,y;
        cin>>x>>y;
        ll a,b;
        a=min(x,y);
        b =max(x,y);
        ll sumA=(a*(a+1))/2;
        ll sumB = (b*(b+1))/2;
        cout<<sumB-sumA +a<<endl;
        //even
        if(a%2!=0)
            a+=1;
        if(b%2!=0)
            b-=1;
        sumA = (a*(a+2))/4;
        sumB =(b*(b+2))/4;

        if(a%2==0)
        cout<<sumB-sumA +a<<endl;
        else
        cout<<sumB-sumA <<endl;

        //odd
        sumA=0;
        sumB=0;
        a=min(x,y);
        b =max(x,y);
        if(a%2==0)
            a+=1;
        if(b%2==0)
            b-=1;

        sumA = ((a+1)*(a+1))/4;
         sumB =((b+1)*(b+1))/4;

        if(a%2!=0)
        cout<<sumB-sumA +a<<endl;
        else
        cout<<sumB-sumA <<endl;



    return 0;
}
