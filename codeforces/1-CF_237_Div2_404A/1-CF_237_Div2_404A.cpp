
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
int freq[27];
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt","w",stdout);
    fast;
int n;
cin>>n;
char a[n][n];
loop(n)
{
    for(int j=0;j<n;j++)
        cin>>a[i][j];
}
int x=0,c=0;
loop(n)
{
    for(int j=0;j<n;j++)
    {
        if(i==j||j==n-1-i)
        {
            if(a[i][j]==a[0][0])
                x++;
        }
        else
        {
            if(a[i][j]==a[0][1])
                c++;
        }
    }

}
if(x+1==n*2&&c==(n*n)-x&&a[0][0]!=a[0][1])
    cout<<"YES"<<endl;
else
    cout<<"NO";
    return 0;
}
