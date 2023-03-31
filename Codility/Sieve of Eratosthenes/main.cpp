///*******************************THINK TWICE CODE ONCE*******************************///
///*******************************NO CODE NO FOOD*******************************///
#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <cstdlib>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
//int f[10000001];
//vector<int>a[100001];
const int n=4e6+4;
int a[n];
void cnt() {
    a[0]=a[1]=1;//not prime
    for(int i=2;i*i<=n;i++)
    {
        if(!a[i])//prime
            for(int j=i*i;j<=n;j+=i) // j+=i to get the multiples 2 4 6 8
               a[j]=1; //set the multiples to not prime

             //j =i*i i=2 >> j=4 // multiples 2 4 6 8
            //        i=3 >> j=9  //multiples 3 6 9  // 6 already has been set to not prime
           //                      during the number 2 we don't have to process it again

    }
    //TIME COMPLEXITY : N*LOG(LOG(N))
}

