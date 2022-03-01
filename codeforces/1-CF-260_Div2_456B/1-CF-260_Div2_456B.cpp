///*******************************THINK TWICE CODE ONCE*******************************///#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
/*
*/
int main()
{
       fast;
  string s;
  cin>>s;
  string ss;
  int n;
  if(s.size()>=2)
  {
  ss=s[s.size()-2];
  ss+=s[s.size()-1];
  n= stoi(ss);
  }
  else
      n=stoi(s);
   if(n%4==0)
    cout<<4;
   else
    cout <<0;
      return 0;

}
