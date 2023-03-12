// you can use includes, for example:
#include <algorithm>
#include <bitset>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // Implement your solution here
    string binary = bitset<32>(N).to_string();
    int start=0,mx=0,exec=0;
    for(int i=0;i<binary.size();i++)
    {
        if(binary[i]=='1')
        {
          if(!exec)
          {
            start=i;
            exec=1;
          }
          //cout<<i;
          mx=max(mx,i-start);
          start=i;
        }
    }
    if(mx>0)
       return mx-1;
    else
       return 0;
}
