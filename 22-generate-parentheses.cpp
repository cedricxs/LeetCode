/*author     :      cedricxs
 *level      :      middle
 */
static int x=[]()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ret;
        add(ret, "",n,n);
        return ret;
    }
    void add(vector<string> & ret, string s,int left, int right){
        if(left == 0 && right == 0){
            ret.push_back(s);
            return; 
        }
        if(left > 0)
            add(ret, s + "(",left-1, right);
        if(right > left)
            add(ret, s + ")", left, right-1);
    }
};
