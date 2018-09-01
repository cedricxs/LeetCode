/*author     :      cedricxs
 *level      :      easy
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0;int r=numbers.size()-1;
        while(l<r)
        {
            if(numbers[l]+numbers[r]>target)r--;
            if(numbers[l]+numbers[r]<target)l++;
            if(numbers[l]+numbers[r]==target)break;
        }
        vector<int>temp;
        temp.push_back(++l);
        temp.push_back(++r);
        return temp;
    }
};