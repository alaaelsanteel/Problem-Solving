///*******************************THINK TWICE CODE ONCE*******************************///
#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
/*
       Author: Alaa Elsanteel
       Idea :for a spaceship to win it's power should be equal or more than the base power
       for every spaceship search for the bases that it's power is equal to or less than the spaceship power
        and sum the gold of these bases
*/
int main()
{
    //freopen("nearest.i","r",stdin);
    fast;
   int n,q;
    cin>>n>>q;
    int arr[n];
    ll prefx[n];
    ll qq;
    loop(n)
      {
          cin>>arr[i];
          if(i>0)
          prefx[i]=prefx[i-1]+arr[i];
          else
            prefx[i]=arr[i];
      }
      ll nArrow=0;
      int indx=0;
    loop(q)
    {
        cin>>qq;
        nArrow +=qq;
        indx=lower_bound(prefx,prefx+n,nArrow)-prefx;
        if(indx>=n)
        {
            nArrow=0;
            cout<<n<<endl;
        }

        else
        {
            if(prefx[indx]>nArrow)
                indx--;

            if(indx==n-1)
            {
                nArrow=0;
                cout<<n<<endl;
            }

            else
                cout<<n-indx-1<<endl;

        }
    }

    return 0;
}

