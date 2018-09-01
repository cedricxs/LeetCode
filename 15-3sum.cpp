/*author     :      cedricxs
 *level      :      middle
 */
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      vector<vector<int>>res;
        if(nums.size()<3)return res;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            if(nums[i]==nums[i-1]&&i!=0)continue;
            int left=i+1,right=nums.size()-1;int tar=-nums[i];
            while(left<right)
            {
                if(nums[left]+nums[right]==tar){temp.push_back(nums[i]);
                                             temp.push_back(nums[left]);
                                             temp.push_back(nums[right]);
                                             res.push_back(temp);
                                                      temp.clear();
                                             if(left<right){left++;right--;
                                            while(left<right&&nums[left-1]==nums[left])left++;while(left<right&&nums[right+1]==nums[right])right--;}
                                             else break;
                                              
                                                      continue;}
                if(nums[left]+nums[right]>tar){right--;
                    while (nums[right] == nums[right+1]) right--;continue;}
                if(nums[left]+nums[right]<tar){left++;
                    while (nums[left] == nums[left-1]) left++;}
            }
        }
        return res;
    }
};