// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // Implement your solution here
    int siz=A.size();
    sort(A.begin(),A.end());
    for(int i=0;i<siz;i+=2)
    {
        if(A[i]!=A[i+1])
        return A[i];
    }
}
