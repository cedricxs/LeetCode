/*author     :      cedricxs
 *level      :      middle
 */
class Solution {
public:
    vector<int> grayCode(int n) {
       if(n==0)return vector<int>(1,0);
        vector<int>res;
        res.push_back(0);
        res.push_back(1);int t=2;int bit=1;int val;
        while(bit<n)
        {
           val=1<<bit;
            while(t--)
            {
                res.push_back(res[t]+val);
            }
            t=res.size();bit++;
        }
        return res;
    }
};