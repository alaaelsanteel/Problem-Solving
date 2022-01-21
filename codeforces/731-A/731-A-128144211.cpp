#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
    //freopen("password.in","r",stdin);


string s;
cin>>s;
int c=0,sum =0 ;
while(c<s.size())
{
if(c==0)
{
    char a='a';
    int x= abs(int(a-s[c]));
    int y =abs(26-x);
    sum+=min(x,y);

}
else
{
    int x= abs(int(s[c-1]-s[c]));
    int y =abs(26-x);
    sum+=min(x,y);
}
c++;
}
cout<<sum;
    return 0;
}