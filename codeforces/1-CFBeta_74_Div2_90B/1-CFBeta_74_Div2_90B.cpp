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
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt","w",stdout);
    fast;
int n,m;
cin>>n>>m;
char a[n][m];
loop(n)
{
    for(int j=0;j<m;j++)
    {
        cin>>a[i][j];
    }
}
loop(n)
{
    for(int j=0;j<m;j++)
    {
        char c=a[i][j];
        bool rw=true,cu=true;
        for(int k=0;k<n;k++)
        {
            //row
            if(k!=i&&c==a[k][j])
            {
                rw=false;
                break;
            }
        }
        for(int k=0;k<m;k++)
        {
            //column
            if(k!=j&&c==a[i][k])
            {
                cu=false;
                break;
            }
        }
        if(rw&&cu)
            cout<<c;
    }
}
    return 0;
}
