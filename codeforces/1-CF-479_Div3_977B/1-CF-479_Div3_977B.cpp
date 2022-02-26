///*******************************THINK TWICE CODE ONCE*******************************///#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;

int main()
{
    fast;

 int n;
 cin>>n;
 string s,ss,a,b,a1,b1,a2,b2;
 cin>>s;
 int c=0,ans=0;
 loop(n-1)
 {
     c=0;
    a=s[i];
    a1=s[i+1];
     a2=a+a1;
     for(int j=i+1;j<n;j++)
     {
         b=s[j];
         b1=s[j+1];
         b2=b+b1;
    if(a2==b2)
        c++;
     }
         if(c>=ans)
         {
             ans=c;
             ss=a2;
         }
 }
    cout<<ss<<endl;
      return 0;

}
