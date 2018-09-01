/*author     :      cedricxs
 *level      :      middle
 */
static const auto ______ = [](){ 
    std::cout.sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
string res;
        int size=0;
        for(int i=0;i<s.length();i++)
{
            int p=res.find(s[i]);
   if(p==string::npos)
       res.push_back(s[i]);
    else{ res.erase(0,p+1);res.push_back(s[i]);}
            int t=res.length();
            size=max(size,t);
}
        return size;
    }
};