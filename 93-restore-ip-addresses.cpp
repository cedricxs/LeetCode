/*author     :      cedricxs
 *level      :      middle
 */
static int x = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        int size=s.size();
        vector<string>res;
        if(size<4||size>12)return res;
        for(int a=1;a<=3;a++)
            for(int b=1;b<=3;b++)
                for(int c=1;c<=3;c++)
                    for(int d=1;d<=3;d++)
                        if(a+b+c+d==size)
                        {
                            int i=stoi(s.substr(0,a)),j=stoi(s.substr(a,b)),k=stoi(s.substr(a+b,c)),l=stoi(s.substr(a+b+c,d));
            
                            if(i<=255&&j<=255&&k<=255&&l<=255)
                            {
                                string t;
                                t=to_string(i)+"."+to_string(j)+"."+to_string(k)+"."+to_string(l);
                                if(t.size()==size+3) 
                                res.push_back(t);
                            }
                        }
        return res;
        
    }
};