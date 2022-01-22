#include <iostream>
#include <ctype.h>
#include<cmath>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{

string a,b;
cin>>a>>b;
int c=0 ;
reverse(a.begin(),a.end());

if(a==b)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
    return 0;
}