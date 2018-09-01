/*author     :      cedricxs
 *level      :      hard
 */
static const void* ___ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       if(nums.size()==0)return 1;
        std::sort(nums.begin(),nums.end());
        int i=1;int j=0;
        while(nums[j]<=0)
        {
            j++;
        }
        for(int k=j;k<nums.size();k++)
        {if(nums[k]>i)break;
        else if(nums[k]==i) i++;
        }  
        return i;
    }
};