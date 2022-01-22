#include <iostream>
#include <bits/stdc++.h>
#include <ctype.h>
#include<string.h>
using namespace std;

int main()
{

int a,b,c,x,y,z,d,e,q,w,j;
cin>>a>>b>>c;
x=a+b*c;
y=a*(b+c);
z=a*b*c;
d=(a+b)*c;
e=a+b+c;
q=max(x,y);
w=max(z,d);
j=max(q,e);
cout<<max(w,j);

    return 0;
}