/*author     :      cedricxs
 *level      :      hard
 */
static const auto _____ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
 }();
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size(); 
        if(!n1&&n2) {if(n2%2==0) return (double(nums2[n2/2-1])+double(nums2[n2/2]))/2;
                     else return nums2[n2/2];
                    }
        if(n1&&!n2){if(n1%2==0) return (double(nums1[n1/2-1])+double(nums1[n1/2]))/2;
                     else return nums1[n1/2];
                    }
        else 
        {
            vector<int> t;int p1=0,p2=0;
            while(p1<n1&&p2<n2)
            {
                if(nums1[p1]<=nums2[p2]){t.push_back(nums1[p1]);p1++;
                                        }
                else if(nums1[p1]>nums2[p2]){t.push_back(nums2[p2]);p2++;
                                        }
            }
            for(;p1<n1;p1++)t.push_back(nums1[p1]);
            for(;p2<n2;p2++)t.push_back(nums2[p2]);
            int s=t.size();
            if(s%2==0)return (double(t[s/2-1])+double(t[s/2]))/2;
            else return t[s/2];
        }
    }
};