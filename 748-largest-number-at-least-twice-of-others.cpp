/*author     :      cedricxs
 *level      :      easy
 */
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if(nums.size()==1)return 0;
        vector<int>::iterator it=max_element(nums.begin(),nums.end());
        int m=*it;
        int p=it-nums.begin();
        nums.erase(it);
        if(m>=2*(*max_element(nums.begin(),nums.end())))return p;
        else return -1;
    }
};