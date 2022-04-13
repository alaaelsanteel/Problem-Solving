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
string s;
cin>>s;
loop(n)
{
    freq[s[i]-65]++;
}
    //in=0
    if(freq[8]==0)
        cout<<freq[0]; //A
     if(freq[8]==1)
        cout<<1;
        if(freq[8]>1)
            cout<<0;

    return 0;
}
