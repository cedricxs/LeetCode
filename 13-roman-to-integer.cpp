/*author     :      cedricxs
 *level      :      easy
 */
class Solution {
public:
    int romanToInt(string s) {
        int len=s.size();int x=0;int temp1=0;int temp2=0;
       for (int i=0;i<len;i++)
        {
        char m=s[i];char n=s[i+1];
        temp1=test(m);
        temp2=test(n);
        if(temp2>temp1) x+=-temp1;
        else x+=temp1;
        }
    return x;} 
    private:
    int test(char s)
        {
            int x;
            
            if(s=='I')x=1;
            if(s=='V')x=5;
            if(s=='X')x=10;
            if(s=='L')x=50;
            if(s=='C')x=100;
            if(s=='D')x=500;
            if(s=='M')x=1000;
            return x;
        }
};