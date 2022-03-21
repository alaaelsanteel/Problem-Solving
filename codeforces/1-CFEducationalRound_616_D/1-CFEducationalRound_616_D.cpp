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
   int n,k;
    cin>>n>>k;
    int arr[n];
    loop(n)
    cin>>arr[i];
    int dif=0,l=0,x=0,left=0,r=0;
    loop(n)
    {
        if(freq[arr[i]]==0)
            dif++;
        freq[arr[i]]++;

        if(dif>k)
        {
            freq[arr[l]]--;
            if(freq[arr[l]]==0)
                dif--;
           l++;
        }

        if(x<i-l+1)
        {
            left=l+1;
            r=i+1;
             x=i-l+1;
        }
    }
    cout<<left<<" "<<r;

    return 0;
}

