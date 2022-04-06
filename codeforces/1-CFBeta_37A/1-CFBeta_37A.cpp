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
    //freopen("nearest.i","r",stdin);
    fast;

int n;
cin>>n;
int arr[n];
loop(n)
{
    cin>>arr[i];
    freq[arr[i]]++;
}
sort(arr,arr+n);
int maxi=0,c=1,m=1;
//47 30 94 41 45 96 51 110 129 24 116 9 47 32 82 105 114 116 75 154 151 70 42 162
loop(n-1)
{
    if(arr[i]!=arr[i+1])
           c++;

}

cout<<*max_element(freq,freq+1001)<<" "<<c;

    return 0;
}

