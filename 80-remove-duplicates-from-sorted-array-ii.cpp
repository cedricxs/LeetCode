/*author     :      cedricxs
 *level      :      middle
 */
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=0;i<nums.size();)
           { int t=nums[i];
             int c=1;
            while (i+c<nums.size())
            {
              if(nums[i+c]==t)c++;
              else break; 
            }
            if(c>2)
            {nums.erase(nums.begin()+i+2,nums.begin()+i+c);i=i+2;}
            else i=i+c;
            
           }
        return nums.size();
    }
};