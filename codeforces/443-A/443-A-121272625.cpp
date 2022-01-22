#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
string s;
int c=0;
getline(cin,s);
sort(s.begin(),s.end());
for(int i=0;i<s.size()-1;i++)
{

        if(isalpha(s[i]))
        {

        if(s[i]!=s[i+1])
            c++;
        }


}
if(s.size()==1)
{
    c=1;
    cout<<c<<endl;
}

else
cout<<c;
    return 0;
}