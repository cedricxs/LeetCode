/*author     :      cedricxs
 *level      :      easy
 */
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
int sum=INT_MIN;
int t=0;
       
        for(int i=0;i<nums.size();i++)
        {
            sum=max(sum,nums[i]);
            t=nums[i]+t;
            if(t<0){t=0;continue;}
            sum=max(t,sum);
        }
        return sum;
}
};