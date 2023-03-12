// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A, int K) {
    // Implement your solution here
      int cnt=0, sz=A.size();

        vector<int>ans(sz);
        if(K%sz==0||sz==0)
        return A;
        K= K%sz;

      for(int i=0;i<sz;i++)
      {
          if((i+K)< sz)
          {
              ans[i+K]=A[i];
          }
          else
          {
          ans[cnt]=A[i];
          cnt++;
          }
      }
      return ans;
}
