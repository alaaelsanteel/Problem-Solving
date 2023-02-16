class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>prfx;
        prfx[0]=1;
        int ans=0,sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];

            if(prfx.find(sum-k)!=prfx.end()) //
            {
              ans += prfx[sum-k];
            }
                prfx[sum]++;
        }
         return ans;
    }

};
