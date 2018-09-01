/*author     :      cedricxs
 *level      :      hard
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       if(prices.empty())return 0;
        int fp=prices[0];
        int sp=prices[0];
        int fs=0;
        int ss=0;
        for(int i=1;i<prices.size();i++)
        {
          fp=min(fp,prices[i]);
          fs=max(fs,prices[i]-fp);
          sp=min(sp,prices[i]-fs);
          ss=max(ss,prices[i]-sp);
        }
        return ss;
    }
};