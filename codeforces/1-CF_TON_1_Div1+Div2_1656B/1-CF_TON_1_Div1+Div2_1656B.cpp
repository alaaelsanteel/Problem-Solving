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

int t;
cin>>t;
while(t--)
{
    int n,d;
    cin>>n>>d;
    int a[n];
    loop(n)
    cin>>a[i];
    sort(a,a+n);
    bool ex=false;
    if(n==1&&a[0]==d)
        cout<<"YES"<<endl;
    else if(n==1 && a[0]!=d)
        cout<<"NO"<<endl;
    else
        {
    int j=0,i=0;

        while(j<n)
        {
            if(a[i]+abs(d)==a[j])
            {
                ex=true;
                break;
            }
            if(a[i]+abs(d)<a[j])
               i++;
            else
                j++;
        }


    if(ex)
        cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
        }
    //if()
}
    return 0;
}
