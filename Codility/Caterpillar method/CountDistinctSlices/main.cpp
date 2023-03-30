// you can use includes, for example:
 #include <map>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int M, vector<int> &A) {
    // Implement your solution here

 map<int,int>mp;
 int n=A.size();
 for(int i=0;i<n;i++)
{
    cin>>A[i];
    mp[A[i]]=0;
}
 int l=0,r=0;

 int res=0;
 while(r<n)
 {
     while(l<n )
     {
         if(mp[A[l]]==0)
            mp[A[l]]++;
         else
            break;
         l++;
     }
     res += l-r;
     if(res>1000000000)
     return 1000000000;
     mp[A[r]]=0;
     r++;
 }
return res;
}
