/*author     :      cedricxs
 *level      :      middle
 */
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        vector<int>num=nums;
        res.push_back(nums);
        next_permutation(nums.begin(),nums.end());
        while(nums!=num)
        {
            res.push_back(nums);
            next_permutation(nums.begin(),nums.end());
        }
        return res;
    }
};