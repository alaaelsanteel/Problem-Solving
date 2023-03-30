// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
  // Time complexity:O(N * log(N))
int solution(vector<int> &A) {
    // Implement your solution here
    int n =A.size();
    sort(A.begin(),A.end());
int l=0,r=n-1;
int mn =abs(A[l]+A[r]);
while(l<=r)
{
    mn=min(mn,abs(A[l]+A[r]));
    if(abs(A[l])>abs(A[r]))
    {
        l++;
    }
    else
        r--;

}
return mn;

}
