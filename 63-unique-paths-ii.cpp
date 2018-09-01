/*author     :      cedricxs
 *level      :      middle
 */
class Solution {
public:

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) { 
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        if(m==1)return *max_element(obstacleGrid[0].begin(),obstacleGrid[0].end())==0;
        if(n==1)
        {
            for(int i=0;i<m;i++)
                if(obstacleGrid[i][0]==1)
                    return 0;
            return 1;
        }
        if(obstacleGrid[m-1][n-1]==1)return 0;
        int a[n];
        a[n-1]=1;
        for(int i=n-2;i>=0;i--)
           {if(obstacleGrid[m-1][i]==0)a[i]=a[i+1];
            else a[i]=0;}
        for(int i=m-2;i>=0;i--)
            for(int j=n-1;j>=0;j--)
           {
                if(j==n-1)
                {
                    if(obstacleGrid[i][n-1]==0)a[j]=a[j];
                    else a[j]=0;
                    continue;
                }
                if(obstacleGrid[i][j]==0)
                a[j]+=a[j+1];
            else a[j]=0;
            }
        return a[0];
         }
};