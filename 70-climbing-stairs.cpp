/*author     :      cedricxs
 *level      :      easy
 */
class Solution {
public:
    int climbStairs(int n) {
        if(n==1)return 1;
        if(n==2)return 2;
        if(n==3)return 3;
        int r=0;int diff[2]={2,3};
        for(int i=4;i<=n;i++)
        {    r=diff[0]+diff[1];
        diff[0]=diff[1];diff[1]=r;
        }
        
return r;        
        
    }
};