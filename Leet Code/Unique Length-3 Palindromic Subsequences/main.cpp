class Solution {
public:
    int countPalindromicSubsequence(string s) {

      int first[26]={[0 ... 25]=INT_MAX},last[26]={};
      //int first[26]={[0 ... ]=INT_MAX}
      int res=0;
      for(int i=0;i<s.size();i++)
      {
          first[s[i]-'a']=min(i,first[s[i]-'a']);
          last[s[i]-'a'] = i;
      }
      for(int i=0;i<26;i++)
      {
          if(first[i]<last[i])
          {
              res+= unordered_set<char>(begin(s)+first[i]+1,begin(s)+last[i]).size();
              //acbaa
              //cba = number of substrings
          }
      }

       return res;
    }
};
