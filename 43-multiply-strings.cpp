/*author     :      cedricxs
 *level      :      middle
 */
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0"||num2=="0")return "0"; 
        int m=num1.size(),n=num2.size();
        int co=0;string r(m+n,'0');
        for(int i=num1.size()-1;i>=0;i--)
        { for(int j=num2.size()-1;j>=0;j--)
           {
               int t=r[i+j+1]-'0'+(num1[i]-'0')*(num2[j]-'0')+co;
               if(t>=10){r[i+j+1]=t%10+'0';co=t/10;}
               else {r[i+j+1]=t+'0';co=0;}
            cout<<r[i+j+1];
           }
         if(co)r[i]=co+'0';
         co=0;
        }
        auto p=r.find_first_not_of('0');
        return p==string::npos ?  r:r.substr(p);
    }
};