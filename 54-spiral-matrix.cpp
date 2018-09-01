/*author     :      cedricxs
 *level      :      middle
 */
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.empty()){ vector<int> r;return r;}
        int dir=0;
        int row=matrix.size(),con=matrix[0].size();
        int i=0,j=0,c=row*con,cur=0,k=0,l=0;
        vector<int>res(c);
        while(1)
        {cout<<i<<j;
            res[cur]=matrix[i][j];cur++;if(cur==c)break;
            if(dir==0){if(j==con-1-k){i++;dir=1;}else j++;continue;}
            if(dir==1){if(i==row-1-l){j--;dir=2;l++;}else i++;continue;}
            if(dir==2){if(j==k){i--;dir=3;}else j--;continue;}
            if(dir==3){if(i==l){dir=0;k++;j++;}else i--;}
        }
return res;
    }
};