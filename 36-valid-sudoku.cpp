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
     bool isok(vector<char>test)
    {
        bool t[9]={false};
        for(auto i:test)
        {
            if(i!='.')
        {if(t[i-'0'-1])return false;
         t[i-'0'-1]=true;}
        }
         return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(auto test:board)
            if(!isok(test))return false;
        vector<char> test(board.size());
        for(int i=0;i<board[0].size();i++)
        {for(int j=0;j<board.size();j++)
        {
             test[j]=board[j][i];
        }
         if(!isok(test))return false;
        }
        for(auto x=0;x<board[0].size()/3;x++)
        for(auto y=0;y<board.size()/3;y++)
        {for(auto i=0;i<3;i++)
            for(auto j=0;j<3;j++)
                test[3*i+j]=board[3*y+i][3*x+j];
        if(!isok(test))return false;
        }
        return true;
    }
};