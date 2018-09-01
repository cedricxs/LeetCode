/*author     :      cedricxs
 *level      :      easy
 */
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if(nums.size()==1)return 0;
        vector<int>r=nums;
        sort(r.begin(),r.end());
     int l=0;int ri=r.size()-1;bool ll=true,rr=true;int c=0;
        while(l<=ri&&(ll||rr))
        {
            if(r[l]==nums[l]&&ll)c++;
            else ll=false;
            if(r[ri]==nums[ri]&&rr&&ri!=l)c++;
            else rr=false;
            if(ll)l++;
            if(rr)ri--;
        }
        return nums.size()-c;
    }
};