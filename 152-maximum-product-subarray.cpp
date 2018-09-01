/*author     :      cedricxs
 *level      :      middle
 */
class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int pro=INT_MIN,t=1,neg=INT_MIN;
        for(auto i:nums)
        {
            if(i==0){t=1;neg=INT_MIN;if(pro<0)pro=0;}
            else {
            pro=max(pro,i);
            t*=i;
            if(neg>INT_MIN)pro=max(pro,t/neg);
            if(t<0)neg=max(neg,t);
            pro=max(t,pro);
            
            }
        }
        return pro;
    }
};