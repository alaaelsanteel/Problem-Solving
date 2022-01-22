#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
int a,b,x,y;
cin>>a>>b;
if(a>b)
{
    x=b;
    y=(a-b)/2;
}
else
{
    if((b-a)%2==0)
    {
        x=a;
        y=(b-a)/2;
    }
    else
    {
        x=a;
    y=(b-a-1)/2;

    }

}

cout<<x<<" "<<y<<endl;
    return 0;
}