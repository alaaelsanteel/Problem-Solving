#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
int freq[10];
int main()
{
    vector<int>arr(6);
   int sum=0,x;
   bool exist=false;
    loop(6)
    {
        cin>>arr[i];
        freq[arr[i]]++;
    if(freq[arr[i]]==4)
        {
            exist=true;
            x=arr[i];
        }
    }
    if(!exist)
        cout<<"Alien";
    else
    {
        sort(arr.begin(),arr.end());
        loop(arr.size())
        {
            if(arr[i]==x)
                {
                    arr.erase(arr.begin()+i,arr.begin()+i+4);
                    break;
                }
        }

  if(arr[0]==arr[1])
    cout<<"Elephant";
  else
    cout<<"Bear";
    }

        return 0;

}