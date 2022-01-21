#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n];
   loop(n)
   cin>>arr[i];
   bool k=true;
   ll sum25=0,sum50 =0,sum100 =0;
   if(arr[0]==25)
   {
       sum25 =25;
        k=true;
       for(int i=1;i<n;i++)
       {
           if(arr[i]==25)
            sum25 += 25;

           if(arr[i]==50)
           {
               sum50 +=50;
               sum25 -= 25;
           }
        if(arr[i]==100)
        {
            sum100 +=100;
            if(sum50>=50)
                {
                    sum50 -= 50;
                    sum25 -= 25;
                }
            else
                sum25 -= 25*3;
        }
        if(sum25<0||sum50<0||sum100<0)
        {
            k=false;
            break;
        }

   }

}

   else
    k=false;
   if(k)
    cout<<"YES";
   else
    cout<<"NO";
        return 0;

}