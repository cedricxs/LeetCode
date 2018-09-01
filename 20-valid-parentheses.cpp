/*author     :      cedricxs
 *level      :      easy
 */
class Solution {
public:
    bool isValid(string s) {
        int len=s.size();bool x=false;
        if(len%2!=0) x=false;
        else{
            vector<char> m;
            m.push_back(s[0]);
            for(int i=1;i<len;i++)              
            {int x=m.size();
        if((m[x-1]=='('&&s[i]==')')||(m[x-1]=='{'&&s[i]=='}')||(m[x-1]=='['&&s[i]==']'))m.pop_back();
            else m.push_back(s[i]);}
            if(m.size()==0) x=true;
        }
        return x;
       
    }
    
};