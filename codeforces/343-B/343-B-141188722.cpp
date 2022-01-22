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
  if(ss.empty())
    cout<<"Yes";
  else
    cout<<"No";
 
 
      return 0;
 
}