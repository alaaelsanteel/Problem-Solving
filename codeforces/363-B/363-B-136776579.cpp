#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
int main()
{
    fast;
    long long n,k;
    cin>>n>>k;
    vector<int>planks(n);
    vector<long long>sum(n);
    loop(n)
    {
        cin>>planks[i];
    }
    sum[0]=planks[0];
    for(int i=1; i<n; i++)
    {
        sum[i]=sum[i-1]+planks[i];
    }
    vector <long long >arr;
    long long indx,c=1;
    arr.push_back(INT_MAX);
    int x=arr[0];
    for(int i=k-1; i<n; i++)
    {
        if(i==k-1)
            arr.push_back(sum[i]);
        else
            arr.push_back(sum[i]-sum[i-k]);
        if(arr[c]<x)
           {
               x=arr[c];
               indx=i+1;
           }
        c++;

    }
    
    cout<<indx-k+1;

    return 0;

}