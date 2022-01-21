#include <iostream>
#include <ctype.h>
#include<cmath>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
 int t;
 cin>>t;
 int a[t];
 for(int i=1;i<=t;i++)
 {

   cin>>a[i];


 }
 for(int j=1;j<=t;j++)
 {
     for(int i=1;i<=t;i++)
     {
         if(a[i]==j)
            cout<<i<<" ";
     }
 }


    return 0;
}