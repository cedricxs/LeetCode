/*author     :      cedricxs
 *level      :      easy
 */
class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        if(s[s.length()-1]==' '){
int t=count(s);
        for(int i=s.length()-1-t;i>=0;i--)
{
if(s[i]!=' ')c++;
           if(s[i]==' ')break;
}}
        else
       for(int i=s.length()-1;i>=0;i--)
{
if(s[i]!=' ')c++;
           if(s[i]==' ')break;
}
return c; 
    }
    int count(string s)
    {
  int t=0;
        for(int i=s.length()-1;i>=0;i--)
{
if(s[i]==' ')t++;
           if(s[i]!=' ')break;
} return t;
    }
};