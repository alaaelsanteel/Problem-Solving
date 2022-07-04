///*******************************THINK TWICE CODE ONCE*******************************///
///*******************************NO CODE NO FOOD*******************************///
#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define loop(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
/*
        Author: Alaa Elsanteel
        idea: we need to check all possible subsets, so the outer loop is the number of all possible subsets and the inner loop
        checks the bits of the chosen subset. I used the right shift (to avoid overflowing but the left shifting is also right if the variable is long long)
         to check if the bit equal to 1 so this number is in the subset, then apply the conditions in the problem.

*/
int main()
{
    //freopen("magical.in", "r", stdin);
    //freopen("output.txt","w",stdout);
    fast;
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    int a[n];

    loop(n)
    cin>>a[i];

    sort(a,a+n);
    int hardest,easiest,cnt=0;
    for(int i=0; i<(1<<n); i++)
    {
        int c=0;
        bool dif=false;
        int total=0;
        for(int j=0; j<n; j++)
        {
            //if(i&(1<<j))
            if((i>>j)&1)
            {
                c++;
                total+=a[j];
                if(c==1)
                    hardest=a[j];
                else
                    easiest=a[j];
            }
        }
        //cout<<hardest<<" "<<easiest<<endl;
        if(c>=2 &&(total>=l && total <= r)&&(abs(hardest-easiest)>=x))
            cnt++;
    }
    cout<<cnt;
    return 0;
}

