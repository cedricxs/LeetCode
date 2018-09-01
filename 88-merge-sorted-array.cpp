/*author     :      cedricxs
 *level      :      easy
 */
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int t=nums1.size()-nums2.size();
      for(vector<int>::iterator it=nums2.begin();it!=nums2.end();it++)
      {nums1[t]=*it;t++;}
        std::sort(nums1.begin(),nums1.end());
        
    }

};