// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // Implement your solution here
  int n=A.size();
   sort(A.begin(),A.end());
   int ans=0;
   for(int i=0;i<n;i++)
   {
       int k=i+2;
       for(int j=i+1;j<n;j++)
       {
           while(k<n && A[i]+A[j]>A[k])
              k++; //else if e continue the number will get more bigger so there's no need to continue
                   //so we need to make one of the first two values bigger
              ans +=k-j-1;
       }
   }
   return ans;
}
