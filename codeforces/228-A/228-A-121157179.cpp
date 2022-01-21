#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
int arr[4],cont=0;
for (int i=0;i<4;i++)
{
    cin>>arr[i];
}
sort(arr,arr+4);
for(int i=0;i<4;i++)
{
    if(arr[i]!=arr[i+1])
        cont++;

}
cout<<4-cont;

    return 0;
}