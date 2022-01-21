#include <iostream>
#include<ctype.h>
#include<cmath>
#include <string.h>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    char a[100],c;
    cin>>n;
    while(n--)
    {
        cin>>a;

        if(strlen(a)>10)
        {
        c =a[strlen(a)-1];
            cout<<a[0]<<strlen(a)-2<<c<<endl;
        }
        else
            cout<<a<<endl;
    }
    return 0;
}