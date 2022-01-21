#include <iostream>
#include <ctype.h>
#include<cmath>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,h,k=1,sum=0;

    cin>>n>>h;
    int a[n];

for(int i=0;i<n;i++)
{
    cin>>a[i];
    if (a[i]==h||a[i]<h)
        k=1;
    else if (a[i]>h)
        k=2;
    sum+=k;
}
   cout<<sum;

    return 0;
}