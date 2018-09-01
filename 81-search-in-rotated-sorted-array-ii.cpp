/*author     :      cedricxs
 *level      :      middle
 */
int x=[](){ std::ios::sync_with_stdio(false); cin.tie(NULL); return 0; }();
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0)return false;
        if(n==1)return nums[0]==target;
        if(target>nums[n-1])
        {
            int p=0;
            while(p<n)
            {
               if(nums[p]==target)return true;
                else p++;
            }
            return false;
        }
        else
        {
            int p=n-1;
            while(p>=0)
            {
              if(nums[p]==target)return true;
                else p--;
            }
            return false;
        }
    }
};