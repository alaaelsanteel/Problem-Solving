#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
string s;
int a,c=0;
cin>>a;
cin>>s;
for(int i=0;i<s.size();i++)
{
 s[i]=tolower(s[i]);
}
sort(s.begin(),s.end());
for(int i=0;i<s.size();i++)
{

if(s[i]!=s[i+1])
    c++;
}

if(c==26)
cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;




    return 0;
}