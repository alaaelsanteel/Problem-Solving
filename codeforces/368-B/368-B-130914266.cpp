#include <bits/stdc++.h>
using namespace std;

int freq[100005],cnt[100005];
int main()
{

    //freopen("password.in","r",stdin))
int n,a,m;
cin>>n>>m;
int arr[n+1];
for(int i=1;i<=n;i++)
{
    cin>>arr[i];
}

    for(int i=n;i>0;i--)
    {
        freq[arr[i]]++;
        if(freq[arr[i]]==1)
        {
            cnt[i]=1;
        }
        else
        {
          cnt[i]=0;
        }

    }
    for(int i=n;i>0;i--)
    {
        cnt[i]=cnt[i+1]+cnt[i];
    }
while(m--)
{
    cin>>a;

   cout<<cnt[a]<<endl;
}

return 0;
}