#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
    //freopen("password.in","r",stdin);

int arr[4],sum=0;
string s;
for(int i=0;i<4;i++)
{
    cin>>arr[i];
}
cin>>s;
for(int i=0;i<s.size();i++)
{
    if(s[i]=='1')
        sum+=arr[0];
    else if(s[i]=='2')
        sum+=arr[1];
        else if(s[i]=='3')
        sum+=arr[2];
        else if(s[i]=='4')
        sum+=arr[3];

}
cout<<sum<<endl;

    return 0;
}