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
    vector<int> searchRange(vector<int>& nums, int target) {
        auto p=equal_range(nums.begin(),nums.end(),target);
        vector<int>r(2);
        if(p.first==p.second){r[0]=-1;r[1]=-1;}
        else {r[0]=p.first-nums.begin();r[1]=p.second-nums.begin()-1;}
        return r;
    }
};