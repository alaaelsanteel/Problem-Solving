class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int p_sz=p.size();
        int s_sz=s.size();

        vector<int>vp(26,0), vs(26,0), ans;

        for(int i=0;i<p_sz;i++)
        {
          vp[p[i]-'a']++;
        }
        int indx=0;
        for(int i=0;i<s_sz;i++)
        {
            vs[s[i]-'a']++;
            if(i>=p_sz)
            {
                vs[s[indx]-'a']--;
                indx++;
            }
             if(vs == vp)
                   ans.push_back(indx);

        }
      return ans;
    }
};
