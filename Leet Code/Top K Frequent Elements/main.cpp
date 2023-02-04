class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
          map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        vector<vector<int>>buckets(n+1);
        //el tkrar hykon el key w vector of values ely leha el takrar da
                                                                   // 1 1 1 2 2 2 3
                                                                //mp[1]=3, mp[2]=3, mp[3]=1

                                                    //index // 0 1 2 3 4 5
                                                   //vector//    3   1
                                                           //        2
       for( auto it = mp.begin(); it != mp.end();it++)
       {
         buckets[it->second].push_back(it->first);
       }

       vector<int>ans;
       for(int i=n;i>=0;i--)
       {
         if(ans.size()<k)
         {
             if(!buckets.empty())
             //        insert fen     insert mn begin ll end
             ans.insert(ans.end(), buckets[i].begin(),buckets[i].end());
         }
         else
         break;
       }
       return ans;


    }
};
