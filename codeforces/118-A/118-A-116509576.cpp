#include <iostream>
#include<ctype.h>
#include<cmath>
#include <string.h>
#include<algorithm>
using namespace std;

int main()
{
 string arr,s;
 cin>>arr;

 for(int i=0;i<arr.size();i++)
 {

     if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='y'||arr[i]=='Y'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
     {

continue;

     }
     else
        s+='.';
        s+=tolower(arr[i]);



//cout<<'.'<<(char)tolower(arr[i]);

 }

cout<<s<<endl;
    return 0;
}