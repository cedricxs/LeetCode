/*author     :      cedricxs
 *level      :      middle
 */
static int hello=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    int myAtoi(string str) {
        int temp = 0;
        stringstream stream(str);
        stream>>temp;
        return temp;
    }
};