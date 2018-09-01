/*author     :      cedricxs
 *level      :      middle
 */
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int> > r(n,vector<int>(n));  
        r[0][0]=1;if(n==1)return r;
        int dir=1;int c=1;int tar=n*n;int i=0;int j=0;int k=0;int l=0;
        while(c<tar)
        {
          if(dir==1)
          {
              j++;
              if(j==n-k){j--;i++;dir=2;}
          }
        else if(dir==2)
        {
              i++;
            if(i==n-l){i--;j--;dir=3;}
        }
        else if(dir==3)
        {
              j--;
            if(j<k){j++;i--;dir=4;k++;l++;}
        }
        else if(dir==4)
        {
              i--;
            if(i<l){i++;j++;dir=1;}
        }
          c++;
          r[i][j]=c;
        }
        return r;
    }
};