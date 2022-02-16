///*******************************THINK TWICE CODE ONCE*******************************///
#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
/*
         Author: Alaa Elsanteel
         idea: No two coins are equal so we use the map with a the char as the key and value as the number of times this char was bigger than another char
         if they're all equal to 1 then this is the contradictory case  so we print Impossible otherwise we've 3 possible values 2,1,0
            remember no two coins are equal we
*/
int main()
{
    fast;
 string s;
map<char,int>m;
m['A']=0;
m['B']=0;
m['C']=0;
 loop(3)
 {
    cin>>s;
    if(s[1]=='>')
     m[s[0]]++;
    else
    m[s[2]]++;
 }
 if(m['A']==1&&m['B']==1&&m['C']==1)
    cout<<"Impossible";

 else
 {
     if(m['A']==0)
        cout<<"A";
     else if(m['B']==0)
        cout<<"B";
       else if(m['C']==0)
        cout<<"C";

         if(m['A']==1)
        cout<<"A";
     else if(m['B']==1)
        cout<<"B";
       else if(m['C']==1)
        cout<<"C";

         if(m['A']==2)
        cout<<"A";
     else if(m['B']==2)
        cout<<"B";
       else if(m['C']==2)
        cout<<"C";
 }


      return 0;

}
