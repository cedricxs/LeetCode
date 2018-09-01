/*author     :      cedricxs
 *level      :      easy
 */
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=0;int  temp=0;
        for(int i:nums)
        {   
            if(i==1)
                temp++;
            else 
            {n=max(n,temp);temp=0;}
        }
        n=max(n,temp);
        return n;
    }
};