/*author     :      cedricxs
 *level      :      middle
 */
static const auto io_speed_io = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    string getPermutation(int n, int k) {
        string a;
        for(int i=0;i<n;i++)a+=i+1+'0';
        k--;
        while(k--)
        {
            next_permutation(a.begin(),a.end());
        }
        return a;
    }
};