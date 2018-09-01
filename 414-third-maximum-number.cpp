/*author     :      cedricxs
 *level      :      easy
 */
static int x = []() { std::ios::sync_with_stdio(false); cin.tie(NULL); return 0; }();
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        list<int>r;
        for(int i:nums)
        r.push_back(i);
        r.sort();
        r.unique();
        list<int>::iterator iter=r.end();
        if(r.size()>2)
        {iter--;iter--;iter--;return *iter;}
        else return *(--iter);
    }
};