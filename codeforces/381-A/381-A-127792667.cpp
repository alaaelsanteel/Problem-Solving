#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
    //freopen("password.in","r",stdin);

int n,sum1=0,sum2=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int left=0,right=n-1;
int turn=0;

while(turn!=n)
{

    if(turn%2==0||turn==0)
    {
        if(arr[left]>arr[right])
        {
            sum1+=arr[left];
            left++;
        }
        else
        {
            sum1+=arr[right];
            right--;
        }
        turn++;
    }
    else
    {
        if(arr[left]>arr[right])
        {
            sum2+=arr[left];
            left++;
        }
        else
        {
            sum2+=arr[right];
            right--;
        }
        turn++;
    }

}



cout<<sum1<<" "<<sum2<<endl;

    return 0;
}