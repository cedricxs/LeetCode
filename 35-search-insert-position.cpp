/*author     :      cedricxs
 *level      :      easy
 */
static string x =[](){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return "";
}();
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;int r=n-1;int mid=(l+r)/2;
        if(target>nums[r])return r+1;
        if(target==nums[r])return r;
        if(target<=nums[l])return l;
        while(l!=mid&&r!=mid)
        {
            if(target<nums[mid])r=mid;
            if(target>nums[mid])l=mid;
            if(target==nums[mid])break;
            mid=(l+r)/2;
        }
        if(mid==l)mid++;
        else if(mid==r)mid--;
        return mid;        
        
    }
};