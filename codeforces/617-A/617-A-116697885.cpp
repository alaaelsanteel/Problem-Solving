#include <iostream>
#include <ctype.h>
#include<string.h>

using namespace std;

int main()
{

  int n;
  cin>>n;
  if(n%5==0)
      cout<<n/5<<endl;

  else
     cout<<((n - (n % 5)) / 5) + 1<<endl;


    return 0;
}