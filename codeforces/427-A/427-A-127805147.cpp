#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
    //freopen("password.in","r",stdin);

int n,p=0,c=0;
cin>>n;
bool x=false;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    if(arr[i]>0)
    {
        p+=arr[i];
    }
    else
    {
        if(p<1)
        {
            c++;
        }
        else
        {
            p--;
        }
    }
}
cout<<c;


    return 0;
}