#include <iostream>
#include <bits/stdc++.h>
#include <ctype.h>
#include<string.h>
using namespace std;

int main()
{

int n,a,b,c=0, arr[200];
cin>>n>>a;
for(int i =0 ;i<a;i++)
{
    cin>>arr[i];
}
cin>>b;
for(int i =a;i<b+a;i++)
{
    cin>>arr[i];
}
sort(arr,arr+(a+b));

for(int i =0 ;i<(a+b);i++)
{
    if(arr[i]!=arr[i+1])
        c++;
}
if(c==n)
    cout<<"I become the guy."<<endl;

    else
        cout<<"Oh, my keyboard!"<<endl;


    return 0;
}