#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
  int n,c=0;
  cin>>n;
  string s;
  while(n--)
{
    cin>>s;

        if(s[0]=='T')
            c+=4;
        else if(s[0]=='C')
            c+=6;
        else if(s[0]=='O')
            c+=8;
        else if(s[0]=='D')
            c+=12;
            else if(s[0]=='I')
            c+=20;

}
cout<<c;
    return 0;
}