/*author     :      cedricxs
 *level      :      easy
 */
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l=0;int r=0;
        for(int p=0;p<nums.size();p++)
        {  if(p==0)
        {
            l=0;
            for(int j=1;j<nums.size();j++)
                r+=nums[j];
        }
         else {l+=nums[p-1];r-=nums[p];}
        if(l==r)return p;
            
        }
        return -1;
    }
    };