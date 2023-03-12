// you can use includes, for example:
 #include <cmath>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

///Time Complexity O(1)
int solution(int X, int Y, int D) {
    // Implement your solution here
     long long ans=ceil(double(double(Y-X)/D));
      return ans;
}
