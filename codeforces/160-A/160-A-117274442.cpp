#include <iostream>
#include <ctype.h>
#include<cmath>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
  int  n,sum=0,sum2=0,c=0;
  cin>>n;
int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
      sum+=a[i];
  }
  sum/=2;
  sort(a,a+n);
  for(int j=n-1;j>=0;j--)
  {
      sum2+=a[j];
      c++;
      if(sum2>sum)
      break;
  }
cout<<c;


    return 0;
}