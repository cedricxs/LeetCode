/*author     :      cedricxs
 *level      :      middle
 */
class Solution {
public:
    int uniquePaths(int m, int n) {
     vector<int>p(n,0);
        int i,j;
        p[n-1]=1;
        for(i=m-1;i>=0;i--)
            for(j=n-2;j>=0;j--)
                p[j]+=p[j+1];
        return p[0];
    }
};