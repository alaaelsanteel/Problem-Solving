#include <iostream>
#include <string.h>

using namespace std;

int main()
{
     ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
   string a,b;
   cin>>a>>b;
   for(int i=0;i<a.size();i++)
   {
       if(a[i]==b[i])
        cout<<"0";
       else
        cout<<"1";
   }



    return 0;
}