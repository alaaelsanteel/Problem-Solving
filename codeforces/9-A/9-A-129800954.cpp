#include <bits/stdc++.h>
using namespace std;

int main()
{

    //freopen("password.in","r",stdin);
int z,w;
cin>>z>>w;
int x,y;
x=max(z,w);
y=6-x+1;
if(y==1)
    cout<<"1/6"<<endl;
else if(y==2)
    cout<<"1/3"<<endl;
else if(y==3)
    cout<<"1/2"<<endl;
else if(y==4)
    cout<<"2/3"<<endl;
else if(y==5)
    cout<<"5/6"<<endl;
else if(y==6)
    cout<<"1/1"<<endl;
else
    cout<<"0/1"<<endl;


    return 0;
}