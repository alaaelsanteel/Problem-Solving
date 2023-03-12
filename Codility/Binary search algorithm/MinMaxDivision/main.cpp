

///TIME COMPLIXITY O(N*log(N+M))
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int n;
bool can(int s,int K,vector<int> A)
{
    int blocks=1, sum=0;
     n=A.size();
    for(int i=0;i<n;i++)
    {
        if(A[i]> s)
        return false;
        if(A[i]+sum <=s)
        sum+=A[i];

        else
         {
             blocks++;
             sum=A[i];
             if(blocks>K)
              return false;
         }
    }
     return true;
}
int solution(int K, int M, vector<int> &A) {
    // Implement your solution here
    n =A.size();
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=A[i];
    int l=0,r=1e9,ans;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(can(mid,K,A))
        ans=mid, r=mid-1;
        else
        l=mid+1;

    }
    return ans;
}
