#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
int main()
{

    fast;
string s;
getline(cin>>ws,s);
char a;
for(int i=s.size()-2;i>=0;i--)
{
    if(isalpha(s[i]))
    {
         a = toupper(s[i]);
        break;
    }
}
if(a=='A'||a== 'E'||a== 'I'||a== 'O'||a== 'U'||a== 'Y')
    cout<<"YES";
else
    cout<<"NO";

    return 0;

}