#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
int main()
{
    fast;

int n,x,indx;
cin>>n;
int arr[4][4];
loop(4)
{
    for(int j=0;j<4;j++)
        cin>>arr[i][j];
}
bool k=false;
loop(4)
{
    x=min(arr[i][0],arr[i][1])+min(arr[i][2],arr[i][3]);
    if(x>n)
        k=false;
    else
    {
        k=true;
        indx=i;
        cout<<indx+1<< " "<<min(arr[i][0],arr[i][1])<<" "<<n-min(arr[i][0],arr[i][1]);
        break;
    }
}
if(!k)
    cout<<"-1";

        return 0;

}