class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        string str="";
        map<string,int>mp;
        vector<string>ans;
        for(int i=0;i<s.size();i++)
        {
          str+=s.substr(i,10);
          if(mp[str]==1)
          {
            ans.push_back(str);
          }
          mp[str]++;
          str.clear();
        }
        return ans;

    }
};
