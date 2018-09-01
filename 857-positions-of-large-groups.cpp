/*author     :      cedricxs
 *level      :      easy
 */
class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int> >res;
        for(int i=0;i<S.size();)
        {
            vector<int>t;int c=0;t.push_back(i);
            char  temp=S[i];
            while(S[i]==temp)
            {
               i++;
               c++;
            }
            if(c>=3){t.push_back(i-1);res.push_back(t);}
        }
        return res;
    }
};