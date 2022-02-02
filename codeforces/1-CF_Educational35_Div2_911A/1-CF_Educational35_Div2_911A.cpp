#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
/*
     Authour:Alaa Elsanteel
     idea: we search for the first occurrence of the minimum element then we store it's position
     then if thers's an element that's equal to the minimum we get the distance between the first and 2th occurrences
      then the distance between the 2th and 3th occurrences and so on with keeping the distance equals to the minimum distance
*/
int main()
{
   fast;
  int n;
  cin>>n;
  int a[n];
  loop(n)
  cin>>a[i];
int mini=*min_element(a,a+n);
int dis=INT_MAX,pos=0,cur=INT_MAX;
   loop(n)
   {
       if(a[i]<cur)
       {
           cur=a[i];
           pos=i;
       }
      else if(a[i]==mini)
       {
           dis=min(dis,i-pos);
           pos=i;
       }
   }

   cout<<dis;
    return 0;
}

