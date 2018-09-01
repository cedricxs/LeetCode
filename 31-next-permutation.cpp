/*author     :      cedricxs
 *level      :      middle
 */
static int pr = []() { 
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);  
    return 0; 
}();
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int p1,p2,i;
        for(i=nums.size()-1;i>0;i--)
            if(nums[i]>nums[i-1]){p1=i-1;break;}
        if(i==0) {reverse(nums.begin(),nums.end());return ;}
        int val=nums[p1];
        for(i=nums.size()-1;i>0;i--)
            if(nums[i]>val){p2=i;break;}
        swap(nums[p1],nums[p2]);
        reverse(nums.begin()+p1+1,nums.end());
        return ;
    }
};