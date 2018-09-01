/*author     :      cedricxs
 *level      :      easy
 */
static int x = [](){std::ios::sync_with_stdio(false);cin.tie(0);return 0;}();
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;)
        {
             if(nums[i]==0)
             {
                 nums.erase(nums.begin()+i);
                 nums.insert(nums.end(),0);
                 n--;
             }
            else i++;
        }
    }
};