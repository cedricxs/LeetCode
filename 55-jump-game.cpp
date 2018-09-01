/*author     :      cedricxs
 *level      :      middle
 */
static const void* ___ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    int find(vector<int>nums,int p)
    {int i;bool f=false;
     for(i=p;i<nums.size();i++)
         if(nums[i]==0){f=true;break;}
    if(f)return i;
     else return -1;
    }
    bool canJump(vector<int>& nums) {
        if(nums.size()==1)return true;
        int pos=find(nums,0);bool canjump=false;
        if(pos==-1)return true;
        while(pos!=-1)
        {
            int i=pos-1;
        while(i>=0)
        {
           if(nums[i]>pos-i&&pos!=nums.size()-1){canjump=true;break;}
           else if(nums[i]>=pos-i&&pos==nums.size()-1){canjump=true;break;}
           else i--;   
        }
        if(i==-1)return false;
        else pos=find(nums,pos+1);    
        }
        if(canjump)return true;
    
    }
};