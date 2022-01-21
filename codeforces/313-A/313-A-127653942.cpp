#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
    //freopen("password.in","r",stdin);

    int n,x;
    string s;
    cin>>n;
    if(n<0)
    {
        s=to_string(n);
        x=s.size();
char a= max(s[x-1],s[x-2]);
for(int i=x-2;i<x;i++)
{
    if(s[i]==a)
    {
        s.erase(i,1);
        x--;

    }
    n=stoi(s);

}
cout<<n;

    }
    else
    {
        cout<<n;
    }



    return 0;
}