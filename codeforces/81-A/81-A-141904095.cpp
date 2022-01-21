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
   loop(s.size())
   {
       if(ss.empty())
            ss.push(s[i]);
       else if(!ss.empty()&&ss.top()==s[i])
                ss.pop();
 
       else if(!ss.empty()&&ss.top()!=s[i])
               ss.push(s[i]);
   }
   int c=0;
  int x=ss.size();
   char arr[x+1];
  for(int i=0;i<x;i++)
   {
       arr[i]=ss.top();
       ss.pop();
   }
   for(int i=x-1;i>=0;i--)
   cout<<arr[i];
 
      return 0;
 
}