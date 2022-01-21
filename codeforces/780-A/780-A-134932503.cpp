#include <bits/stdc++.h>
using namespace std;
int freq[200005];
int main()
{
ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("password.in","r",stdin))

int n, c=0,maxi=0;
cin>>n;
int arr[n*2];
for(int i=0;i<n*2;i++)
{
    cin>>arr[i];
   freq[arr[i]]++;
   if(freq[arr[i]]==2)
    c--;
   else
    c++;
   maxi=max(maxi,c);
}

cout<<maxi;
return 0;

}