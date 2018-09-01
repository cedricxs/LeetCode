/*author     :      cedricxs
 *level      :      easy
 */
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int len;
        len= test(nums);
        return len;
	}
  private:
    int test(vector<int>& nums) {
	int x = nums.size();
	for(int i=0;i<x;i++)
	for (vector<int>::iterator it = nums.begin(); it != nums.end();)
		if (*it == nums[i]&&it!=nums.begin()+i)
		{
			it=nums.erase(it); x--;
		}
		else
		{
			it++;
		}
	return nums.size();
}
    
};