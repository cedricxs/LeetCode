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
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>  res;int n=nums.size();
        if(n<4)return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++)
            for(int j=i+1;j<n-2;j++)
            {
               int p1=j+1;int p2=n-1; 
                while(p1<p2)
                {
                    int sum=nums[i]+nums[j]+nums[p1]+nums[p2];
                        if(sum==target)
                        {
                           vector<int>temp;bool h=false;
                            temp.push_back(nums[i]);
                            temp.push_back(nums[j]);
                            temp.push_back(nums[p1]);
                            temp.push_back(nums[p2]);
                            for(int q=0;q<res.size();q++)
                                if(temp==res[q]){h=true;break;}
                            if(!h)res.push_back(temp);
                            p1++;
                        }
                      else if(sum>target) p2--;
                      else p1++;
                }
            }
        return res;
    }
};