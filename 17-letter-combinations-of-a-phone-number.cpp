/*author     :      cedricxs
 *level      :      middle
 */
static const void* ___ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();class Solution {
public:
    vector<string> letterCombinations(string digits) {
vector<string> p;vector<string> r;
p.push_back("");
p.push_back("");
p.push_back("abc");
p.push_back("def");
p.push_back("ghi");
p.push_back("jkl");
p.push_back("mno");
p.push_back("pqrs");
p.push_back("tuv");
p.push_back("wxyz");
        if(digits.length()==1)
            for(int i=0;i<p[digits[0]-'0'].length();i++)
            {string temp;
temp+=p[digits[0]-'0'][i];r.push_back(temp);}
        
if(digits.length()>=2)
for(int i=0;i<p[digits[0]-'0'].length();i++)
for(int j=0;j<p[digits[1]-'0'].length();j++)
{string temp;
temp+=p[digits[0]-'0'][i];
temp+=p[digits[1]-'0'][j];
r.push_back(temp);}
digits.erase(0,2);
while(digits.length()>0)
{
    vector<string> m=r;r.clear();
      for(int i=0;i<p[digits[0]-'0'].length();i++)
       { for(vector<string>::iterator it=m.begin();it!=m.end();it++)
        {string temp=(*it);
        temp+=p[digits[0]-'0'][i];
        r.push_back(temp);
        }
       }
     digits.erase(0,1);

}return r;
    }
};