/*author     :      cedricxs
 *level      :      middle
 */
static const void* ___ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    string convert(string s, int numRows) {
       int r=s.length();
        if(r==0||r==1)return s;
        else if(numRows==1)return s;
        else 
        {string res;
            for(int i=0;i<numRows;i++)
            {
                int t=i;
               if(t==0||t==numRows-1)while(t<r){res.push_back(s[t]);t+=2*(numRows-1);}
               else
                   while(t<r)
                   {
                      res.push_back(s[t]);t+=2*(numRows-i-1);
                       if(t<r)res.push_back(s[t]);
                       t+=2*i;
                   }
            }
    
        return res;
        }
    }
};