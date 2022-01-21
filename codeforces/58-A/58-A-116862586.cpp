#include <iostream>
#include <ctype.h>
#include<cmath>
#include<string.h>

using namespace std;

int main()
{

char a[100];
  int c=0;
  cin>>a;
  for(int i=0;i<strlen(a);i++)
  {
     if(a[i]=='h'&&c==0)
     c++;
  else if(a[i]=='e'&&c==1)
    c++;
  else if(a[i]=='l'&&c==2)
    c++;
  else if(a[i]=='l'&&c==3)
    c++;
  else if(a[i]=='o'&&c==4)
    c++;
  }
    if(c==5)
  cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;






    return 0;
}