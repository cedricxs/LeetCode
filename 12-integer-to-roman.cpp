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
    string intToRoman(int num) {
        int x=num;
        vector<int>nums;string r;
while(x>0)
{
    nums.push_back(x%10);
    x=x/10;
}
if(nums.size()>=4) for(int i=0;i<nums[3];i++)r.append("M");
if(nums.size()>=3) 
    if(nums[2]<4)
      for(int i=0;i<nums[2];i++)r.append("C");
    if(nums[2]==4)
      r.append("CD");
    if(nums[2]>4&&nums[2]<9)
      {r.append("D");
      for(int i=0;i<nums[2]-5;i++)r.append("C");}
      if(nums[2]==9)
      r.append("CM");
if(nums.size()>=2)
  if(nums[1]<4)
      for(int i=0;i<nums[1];i++)r.append("X");
    if(nums[1]==4)
      r.append("XL");
    if(nums[1]>4&&nums[1]<9)
      {r.append("L");
      for(int i=0;i<nums[1]-5;i++)r.append("X");}
      if(nums[1]==9)
      r.append("XC");
      if(nums.size()>=1)
  if(nums[0]<4)
      for(int i=0;i<nums[0];i++)r.append("I");
    if(nums[0]==4)
      r.append("IV");
    if(nums[0]>4&&nums[0]<9)
      {r.append("V");
      for(int i=0;i<nums[0]-5;i++)r.append("I");}
      if(nums[0]==9)
      r.append("IX");
      return r;
    }
};