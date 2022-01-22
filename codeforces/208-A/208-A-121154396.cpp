#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
string s;
cin>>s;
for(int i=0;i<s.size();i++)
{
    if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        s.replace(i,3," ");

}
cout<<s<<endl;
    return 0;
}