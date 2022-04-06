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
 int t;
 cin>>t;
 int n;
 while(t--)
 {
     cin>>n;
     string s;
     cin>>s;
     int t[n],m[n];
     int tt=0, mm=0;
    loop(n)
     {
         if(s[i]=='T')
         {
             t[tt]=i;
             tt++;
         }
         else
         {
             m[mm]=i;
             mm++;
         }
     }
     int x=tt;
     bool ex=false;
     loop(mm)
     {
         if(t[i]<m[i]&&t[i+mm]>m[i])
            ex=true;

         else
         {
             ex=false;
             break;
             }
     }
     if(ex&&mm+(mm*2)==n)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;
 }


    return 0;
}

