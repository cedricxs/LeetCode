/*author     :      cedricxs
 *level      :      middle
 */
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> s=strs;
        for(auto i=0;i<s.size();i++)
        sort(s[i].begin(),s[i].end());
        vector<vector<string>> res;
        bool t[s.size()];
        for(int o=0;o<s.size();o++)t[o]=false;
        for(auto i=0;i<s.size();i++)
        {  vector<string>temp;
           if(!t[i])
            for(auto j=0;j<s.size();j++)
             if(s[i]==s[j]){temp.push_back(strs[j]);t[j]=true;}
           if(!temp.empty())res.push_back(temp);
        }
        return res;
    }
};