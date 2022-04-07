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
    //freopen("nearest.i","r",stdin);
    fast;
    int n;
 cin>>n;;
 string s;
 cin>>s;
 loop(n)
 {
    freq[s[i]-97]++;
 }
 ll ans=0;
 int c=0;
 loop(26)
 {
     if(freq[i]==0)
        c++;
     else if(freq[i]!=0)
       ans+= (freq[i]-1);
 }
 if(c <ans)
    cout<<-1;
 else
 cout<<ans;
    return 0;
}

