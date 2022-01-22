#include <iostream>

using namespace std;

int main()
{
int a;
cin>>a;
 for(int i=1;i<=a;i++)
 {
 if(i%2!=0)
    cout<<"I hate ";
 else
    cout<<"I love ";
 if(i!=a)
    cout<<"that ";
 else
    cout<<"it ";
 }
    return 0;
}