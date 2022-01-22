#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 /* freopen("xor.in" , "r", stdin);*/
int n,c=0;
cin>>n;
if(n>=100)
{
    while(n>=100)
    {
    n-=100;
    c++;
    }
}
 if(n<100)
{
    while(n-20>=0)
    {
        n-=20;
        c++;
    }

}
if(n<20)
{
    while(n-10>=0)
    {
        n-=10;
        c++;
    }
}
if(n<10)
{
    while(n-5>=0)
    {
        n-=5;
        c++;

    }
}
if(n<5)
{
    c+=n;
}

 cout<<c<<endl;


return 0;
}