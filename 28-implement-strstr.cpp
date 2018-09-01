/*author     :      cedricxs
 *level      :      easy
 */
class Solution {
public:
    int strStr(string haystack, string needle) {
       if(needle.empty())return 0;
        int p=haystack.find(needle.c_str());
        return p;
    }
};