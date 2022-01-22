#include <bits/stdc++.h>
using namespace std;

int main()
{

    //freopen("password.in","r",stdin);
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int m,a,b;
cin>>m;
while(m--)
{
    cin>>a>>b;
    if(a!=1)
    {
    arr[a-2]+=b-1; //13-1=12 arr[a-1]-1
    arr[a]+=arr[a-1]-b;
    arr[a-1]=0;
    }
    else
    {
        arr[a]+=arr[a-1]-b;
        arr[a-1]=0;
    }

    }
    for(int i=0;i<n;i++)
    {

        cout<<arr[i]<<endl;
    }
    return 0;
}