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
cin>>n;
string s[n];
loop(n)
{
    cin>>s[i];
}
int indx;
bool l=false,r=false;
loop(n)
{
    if(s[i]=="OO|XX"||s[i]=="OO|XO"||s[i]=="OO|OX"||s[i]=="OO|OO")
    {
        r=true;
       // s[i]="++";
        s[i]="++"+s[i].substr(2,3);
        break;
    }
    if(s[i]=="XX|OO"||s[i]=="XO|OO"||s[i]=="OX|OO"||s[i]=="OX|OO"||s[i]=="OX|OO")
    {
        l=true;
        indx=i;
        s[i]=s[i].substr(0,3)+"++";
        break;
    }
}
if(r||l)
{
    cout<<"YES"<<endl;
    loop(n)
    {
        cout<<s[i]<<endl;
    }
}
else
    cout<<"NO"<<endl;

    return 0;
}

