#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
/*
        Author: Alaa Elsanteel
        idea:
         we can see that the sum of the 2th array =(sum of 1th array) - (the element that dosen't exist in the 2th one)
         and the same goes with the 3rd one sum of it's elements = (sum of 2th array) - (the none existing element)

*/
int main()
{
  fast;
 int n;
 cin>>n;
 int a[n],b[n-1],c[n-2];
 ll sumA=0,sumB=0,sumC=0;
 loop(n)
 {
     cin>>a[i];
    sumA+=a[i];
 }
 loop(n-1)
 {
     cin>>b[i];
     sumB+=b[i];
 }
 loop(n-2)
 {
     cin>>c[i];
     sumC+=c[i];
 }
 cout<<sumA- sumB<<endl;
 cout<<sumB - sumC<<endl;
      return 0;

}