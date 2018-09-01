/*author     :      cedricxs
 *level      :      easy
 */
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        map<int,int>res;
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(abs(nums[i]-nums[j])==k)
                {
                    if(nums[i]>nums[j])res.insert(make_pair(nums[j],nums[i]));
                    else res.insert(make_pair(nums[i],nums[j]));
                    break;
                }
        return res.size();
    }
};