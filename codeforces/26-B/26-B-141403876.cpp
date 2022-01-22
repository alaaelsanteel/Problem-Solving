#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;

int main()
{
  fast;


string s;
cin>>s;
stack<char>ss;
int c=0;
loop(s.size())
{

         if(ss.empty())
            {
                ss.push(s[i]);
                continue;
            }
        if(ss.top()=='('&&s[i]==')')
         {
             ss.pop();
             c++;
         }
         else
            ss.push(s[i]);

}
cout<<c*2;


      return 0;

}