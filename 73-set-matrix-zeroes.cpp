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
    void setZeroes(vector<vector<int>>& matrix) {
        int c=matrix.size(),b=matrix[0].size(); 
        int h[matrix.size()][matrix[0].size()];
        for(int i=0;i<c;i++)
            for(int j=0;j<b;j++)
                h[i][j]=0;
        for(int i=0;i<c;i++)
            for(int j=0;j<b;j++)
            {
                if(matrix[i][j]==0)
                {
                   for(int m=0;m<b;m++)
                       h[i][m]=1;
                   for(int n=0;n<c;n++)
                       h[n][j]=1;
                }
            }
       for(int i=0;i<c;i++)
            for(int j=0;j<b;j++)
                if(h[i][j]==1)
                    matrix[i][j]=0;
    }
};