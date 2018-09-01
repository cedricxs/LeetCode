/*author     :      cedricxs
 *level      :      middle
 */
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>res;
        vector<int> t(k,0);
        int i=0;
        while(i>=0)
        {
            t[i]++;
            if(i==k-1)res.push_back(t);
            else if(t[i]<n){i++;t[i]=t[i-1];}
            if(t[i]>=n)i--;
        }
        return res;
    }
};