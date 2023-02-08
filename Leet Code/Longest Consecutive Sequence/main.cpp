class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
       int a[n+1];
       for(int i=0;i<n;i++)
       {
           a[i]=nums[i];
       }
       sort(a,a+n);
        int mx=0,c=0;
        for(int i=0;i<n-1;i++)
        {

            if(a[i]==a[i+1])
            continue;
            if(a[i]+1==a[i+1])
              c++;
            else
            c=0;
            mx=max(mx,c);

        }
        if(n==0)
          return 0;
        else
        return mx+1;
    }
};
