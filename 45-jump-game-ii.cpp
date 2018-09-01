/*author     :      cedricxs
 *level      :      hard
 */
static const void* ___ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    int jump(vector<int>& nums) {
       if(nums.size()==1)return 0;
        int r=0;int pos=0;int m=nums[pos];int y=0;
        while(m+pos<nums.size()-1)
        {
        int j=1;pos+=y;m=nums[pos];
        r++;
 for(int i=pos;j<=nums[pos];j++)
   if(nums[pos+j]+j>=m)
     {m=nums[pos+j]+j;y=j;}
        }
        r++;
       return r; 
    }
};