///*******************************THINK TWICE CODE ONCE*******************************///
///*******************************NO CODE NO FOOD*******************************///
#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
/*
        Author: Alaa Elsanteel
*/
int main()
{
    //freopen("nearest.i","r",stdin);
    fast;
   int k;
    cin>>k;
string s;
cin>>s;
sort(s.begin(),s.end());
loop(s.size())
{

    freq[s[i]-97]++;
}
int c=0;
loop(s.size())
{
    if(freq[s[i]-97]%k==0)
        c++;

}
if(c==s.size())
{
    loop(k)
    {
        for(int i=0;i<s.size();i+=k)
        {
            cout<<s[i];
        }

    }
}
else
    cout<<-1;
    return 0;
}

