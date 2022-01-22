#include <iostream>
#include <bits/stdc++.h>
#include <ctype.h>
#include<string.h>
using namespace std;

int main()
{

string s;
   cin>>s;
   int c=0,a=0;

   for(int i=1;i<s.size();i++)
   {
       if(islower(s[i]))
        c++;
    }
  for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
            a++;

    }
       if(islower(s[0])&&c==0)
       {
          s[0]=toupper(s[0]);

        for(int i=1;i<s.size();i++)
        {
        s[i]=tolower(s[i]);
        }
        cout<<s;
        return 0;
      }


    if(a==s.size())
    {
    for(int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
    }
    cout<<s;
    }


      else
        cout<<s;
    return 0;
}