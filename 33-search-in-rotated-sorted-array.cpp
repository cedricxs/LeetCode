/*author     :      cedricxs
 *level      :      middle
 */
static const void* ___ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i;
        if(nums.size()==0)return -1;
        if(nums[nums.size()-1]>=target)
        {i=nums.size()-1;
         while(nums[i]>target)
         {
             i--;
         }
         if(nums[i]==target)return i;
         else return -1;
        }
        else
        {
                i=0;
            while(nums[i]<target)
            { i++; }
            if(nums[i]==target)return i;
            else return -1;
        }
    }
};