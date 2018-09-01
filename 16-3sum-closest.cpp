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
    int threeSumClosest(vector<int>& nums, int target) {
int diff=10000;int res;
  for(int i=0;i<nums.size()-2;i++)
    for(int j=i+1;j<nums.size()-1;j++)
     for(int z=j+1;z<nums.size();z++)
        {int t=nums[i]+nums[j]+nums[z];
            if(diff>abs(target-t))
            {
                diff=abs(target-t);
                res=t;
            }
        }
    return res;
    }
};