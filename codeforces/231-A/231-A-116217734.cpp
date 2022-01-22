#include <iostream>
#include<ctype.h>
#include<cmath>
#include <string.h>
#include<algorithm>
using namespace std;

int main()
{
int t,arr[3],c=0;
cin>>t;
while(t--)
{

for(int i=0;i<3;i++)
{
    cin>>arr[i];
}
for(int i=0;i<3;i++)
{

   if(arr[i]==1&&arr[i+1]==1||arr[i]==1&&arr[i+2]==1||arr[i+1]==1&&arr[i+2]==1||arr[i]==1&&arr[i+1]==1&&arr[i+2]==1)
        c++;
        break;


}

}

cout<<c<<endl;
    return 0;
}