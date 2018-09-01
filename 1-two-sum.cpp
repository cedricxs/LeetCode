/*author     :      cedricxs
 *level      :      easy
 */
static const void* ___ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>num=nums;
        sort(num.begin(),num.end());
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            if(num[l]+num[r]>target)r--;
            else if(num[l]+num[r]<target)l++;
            else break;
        }
        int n1=num[l],n2=num[r];
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {if(nums[i]==n1)res.push_back(i);
         else if(nums[i]==n2)res.push_back(i);}
     return res;
        
    }
};