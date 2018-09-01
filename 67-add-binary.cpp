/*author     :      cedricxs
 *level      :      easy
 */
class Solution {
public:
    string addBinary(string a, string b) {
        int l1=a.length();int l2=b.length();
        if(a.length()>b.length()) for(int i=0;i<l1-l2;i++)b.insert(b.begin(),'0');
        else if(a.length()<b.length()) for(int i=0;i<l2-l1;i++)a.insert(a.begin(),'0');
        int co=0;
        for(int i=a.length()-1;i>=0;i--)
        {
          a[i]=a[i]+b[i]-48+co;
            if(a[i]=='2'){a[i]='0';co=1;}
            else if(a[i]=='3'){a[i]='1';co=1;}
            else co=0;
        }
        if(co==1)
            a.insert(a.begin(),'1');
        return a;
        
    }
};