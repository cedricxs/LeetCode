/*author     :      cedricxs
 *level      :      easy
 */
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       string num;
       for(vector<int>::iterator it=digits.begin();it!=digits.end();it++ )
       {
         num+=to_string(*it);
       }
       int co=0;
        if(num[num.length()-1]=='9'){num[num.length()-1]='0';co=1;

       for(int i=num.length()-2;i>=0;i--)
       {
           if(num[i]=='9'){co=1;num[i]='0';}
           else   {num[i]+=co;co=0;break;}         
       }
        if(co==1)
            num.insert(num.begin(),'1');}
        else num[num.length()-1]+=1;
        vector<int> res;
        for(int i=0;i<num.length();i++)
            res.push_back(num[i]-'0');
        return res;
    }
};