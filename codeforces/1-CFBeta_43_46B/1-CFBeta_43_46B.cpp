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
int x,d;
 int c=0;
loop(n)
{
    cout<<s[i];
    c++;
    if(c==2&&i<n-2)
    {
        cout<<"-";
        c=0;
    }
}
    return 0;
}
