#include <iostream>
#include<ctype.h>
#include<cmath>
#include <string.h>
#include<algorithm>
using namespace std;

int main()
{
    string a,s;

    cin>>a;
    for(int i=0;i<a.size();i++)
    {
       if (isdigit(a[i]))
         s.push_back (a[i]);
sort(s.begin(),s.end());


    }
    cout<<s[0];
    for(int i=1;i<s.size();i++)
    {

        cout<<"+"<<s[i];

    }



    return 0;
}