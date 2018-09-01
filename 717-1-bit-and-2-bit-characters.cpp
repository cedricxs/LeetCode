/*author     :      cedricxs
 *level      :      easy
 */
static int x=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) { 
        for(int i=0;i<bits.size();i++)
         {
             if(bits[i]==1)i++;
            else if(bits[i]==0)
                if(i==bits.size()-1)return true;
         }
        return false;
    }
};