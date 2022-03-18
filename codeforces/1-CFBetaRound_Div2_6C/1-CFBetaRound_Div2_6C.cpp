///*******************************THINK TWICE CODE ONCE*******************************///
#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
/*
       Author: Alaa Elsanteel
       Idea :starting with comparing the time spent eating the chocolates bars as Alice starts from the rightmost and ob from the leftmost
             if the time needed for alice to eat the chocolate is less than or equal to bob's she moves to the next chocolate so I sumed up the time then
                increasing num of alice's eaten chocolates
                else increase num of bob's eaten chocolates
*/
int main()
{
    //freopen("nearest.i","r",stdin);
    fast;
      int n;
   cin>>n;
   int arr[n];
   loop(n)
     cin>>arr[i];

   int l=0 ,r=n-1;
   int alice= arr[l], bob=arr[r];
   int Aans=0,Bans=0;
   while(l<=r)
   {

       if(alice <= bob)
       {
           l++;
         alice += arr[l];
         Aans++;
       }
       else if(alice > bob)
       {
           r--;
          bob +=arr[r];
          Bans++;
       }

   }
cout<<Aans<<" "<<Bans;
    return 0;
}

