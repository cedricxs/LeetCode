/*author     :      cedricxs
 *level      :      middle
 */
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int> > ans(1);
        
        for(int i=0;i<nums.size();i++){
            vector<vector<int> > tmp(ans.size()*2);
            for(int j=0;j<ans.size();j++){
                tmp[2*j] = ans[j];
                ans[j].push_back(nums[i]);
                tmp[2*j+1] = ans[j];
            }
            ans.swap(tmp);
        }
        
        return ans;
    }
};