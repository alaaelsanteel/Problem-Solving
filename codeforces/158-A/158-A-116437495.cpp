#include <iostream>
#include<ctype.h>
#include<cmath>
#include <string.h>
#include<algorithm>
using namespace std;

int main()
{
  int n,k,a,c=0;
cin>>n>>k;
int arr[n];
for (int i=1;i<=n;i++)
{
    cin>>arr[i];
    }
    for (int i=1;i<=n;i++)
    {

        if(arr[i]==0)
            c;
        else if(arr[i]>=arr[k])
            c++;

            }



cout<<c<<endl;
    return 0;
}