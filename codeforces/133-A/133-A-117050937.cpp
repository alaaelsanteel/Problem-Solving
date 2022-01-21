#include <iostream>
#include <ctype.h>
#include<cmath>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
   string a;
   cin>>a;
   int c=0;
   for(int i=0;i<a.size();i++)
   {

       if(a[i]=='H'||a[i]=='Q'||a[i]=='9')
        c=1;
   }
   if(c==1)
   cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;


    return 0;
}