#include <iostream>
#include <ctype.h>
#include<cmath>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,t,c=1;
    cin>>n>>t;
    char a[n];
    cin>>a;


while(t--)
    {
    for(int i=0;i<n-1;i++)
    {


      if(a[i]=='B'&&a[i+1]=='G')
      {

   swap(a[i],a[i+1]);
i++;
      }

    }
    }
    cout<<a;

    return 0;
}