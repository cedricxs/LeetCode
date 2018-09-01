/*author     :      cedricxs
 *level      :      easy
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty())return 0;
        int fp=prices[0];
        int fs=0;
        for(int i:prices)
        {
            fp=min(fp,i);
            fs=max(fs,i-fp);
        }
        return fs;
    }
};