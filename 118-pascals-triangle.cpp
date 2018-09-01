/*author     :      cedricxs
 *level      :      easy
 */
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res(numRows);
        if(numRows==0)return res;
        
        
         for(int h=0;h<numRows;h++)
         {vector<int>temp(h+1);
         temp[0]=1;
        for(int i=1;i<=h;i++)
            for(int j=i;j>=1;j--)
                temp[j]+=temp[j-1];
        res[h]=temp;
        }
        return res;

    }
};