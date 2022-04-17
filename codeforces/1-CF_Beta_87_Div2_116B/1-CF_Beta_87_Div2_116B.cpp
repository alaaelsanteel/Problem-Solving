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
int c=0;
loop(n)
{
    for(int j=0;j<m;j++)
        cin>>a[i][j];
}
loop(n)
{
    for(int j=0;j<m;j++)
    {
        if(a[i][j]=='W')
        {
            if(i<n-1&&a[i+1][j]=='P')
            {
                c++;
                //a[i][j]=='.'
            }
            else if(i>0&&a[i-1][j]=='P')
            {
                c++;
            }
            else if(j<m-1&&a[i][j+1]=='P')
            {
                c++;
            }
            else if(j>0&&a[i][j-1]=='P')
            {
                c++;
            }
        }
    }
}
cout<<c;

    return 0;
}
