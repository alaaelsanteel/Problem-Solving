#include <iostream>
#include <ctype.h>
#include<cmath>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
int n,c=0,max_arr=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];

}
for(int i=0;i<n-1;i++)
{

    if(arr[i]-arr[i+1]<=0)
        c++;



    else
    {
max_arr=max(max_arr,c);
        c=0;


    }


}
if(max_arr<c)
cout<<c+1;
else
    cout<<max_arr+1;


    return 0;
}