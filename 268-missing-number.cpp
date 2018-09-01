/*author     :      cedricxs
 *level      :      easy
 */
static int x = []() { std::ios::sync_with_stdio(false); cin.tie(NULL); return 0; }();
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s1=0;int s2=0;int i;
        for(i=0;i<nums.size();i++)
        {
            s1+=i;
            s2+=nums[i];
        }
        return s1+i-s2;
    }
};