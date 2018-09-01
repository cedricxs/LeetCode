/*author     :      cedricxs
 *level      :      easy
 */
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        
        vector<int>res;if(n==0)return res;
        bool h[n]={false};
        for(int i=0;i<n;i++)
            h[nums[i]-1]=true;
        for(int i=0;i<n;i++)
            if(!h[i])res.push_back(i+1);
        return res;
    }
};