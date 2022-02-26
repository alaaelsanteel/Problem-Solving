///*******************************THINK TWICE CODE ONCE*******************************///#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
/*
       Author: Alaa Elsanteel
       Idea : use the map and the key is the coin name and the value is how many times this coin was bigger than any other coin
       we have 3 possible values the smallest coin equals to 0 , 1 equals to the in between coin and 2 for the biggest coin
       so we search for these values in the order 0,1 and 2
*/
int main()
{
     string s,ss;
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
