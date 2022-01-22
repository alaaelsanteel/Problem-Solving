#include <bits/stdc++.h>
using namespace std;

int main()
{

    //freopen("password.in","r",stdin);
string s,t;
int c=0;
cin>>s>>t;
for(int i=0;i<t.size();i++)
{
    if(s[c]==t[i])
    {
        c++;
    }

}
cout<<c+1;

    return 0;
}