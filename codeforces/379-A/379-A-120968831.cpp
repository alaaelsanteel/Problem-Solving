#include <iostream>
#include <bits/stdc++.h>
#include <ctype.h>
#include<string.h>
using namespace std;

int main()
{

int a,b,sum=0;
cin>>a>>b;
int x=a;
while (a>=b)
{


x+=(a/b);
a=(a/b)+(a%b);

}
cout<<x;


    return 0;
}