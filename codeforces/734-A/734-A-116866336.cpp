#include <iostream>
#include <ctype.h>
#include<cmath>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
char a[n];
cin>>a;
int c=0 ,c2=0;
for(int i=0;i<n;i++)
{

    if(a[i]=='A')
        c++;
    else if (a[i]=='D')
        c2++;
}
if (c>c2)
    cout<<"Anton"<<endl;
else if (c<c2)
    cout<<"Danik"<<endl;
else
    cout<<"Friendship"<<endl;




    return 0;
}