/*author     :      cedricxs
 *level      :      middle
 */
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>res(n,vector<int>(n));
        for(int i=n-1;i>=0;i--)
          for(int j=0;j<n;j++)
           res[j][n-1-i]=matrix[i][j]; 
        matrix=res;
    }
};