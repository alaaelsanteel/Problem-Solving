#include <iostream>
#include <ctype.h>
#include<string.h>

using namespace std;

int main()
{

  int t,sum=0,c=0;
  cin>>t;
  int a,b;
for(int i=0;i<t;i++)
  {
      cin>>a>>b;
      sum=(a+c)-b;
      if(sum<0)
        c=0;
      else
        c=sum;
  }
  cout<<sum;

    return 0;
}