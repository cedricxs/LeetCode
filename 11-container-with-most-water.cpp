/*author     :      cedricxs
 *level      :      middle
 */
static int x=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();


class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int Max = 0;
        while(left < right)
        {
            Max = max(Max, (right - left) * min(height[left], height[right]));
            if(height[left] > height[right]) right--;
            else left++;
        }
        return Max;
    }
};