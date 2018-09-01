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
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()||matrix[0].empty())return false;
        int c=matrix.size();int r=matrix[0].size();
        int z[c];
        for(int i=0;i<c;i++)
            z[i]=matrix[i][r-1];
        int p=0;
        if(target<matrix[0][0]||target>matrix[c-1][r-1])return false;
        while (p<c)
        {
          if(target>z[p])p++;
          else break;
        }
        for(int i=0;i<r;i++)
            if(matrix[p][i]==target)return true;
        return false;
    }
};