/*author     :      cedricxs
 *level      :      middle
 */
class Solution {
public:
    string longestPalindrome(string s) {
      int n=s.size();
        if(n==0)return "";
        if(n==1)return s;
        else 
        {int start=0,maxl=0;
            for(int i=0;i<n;)
            {
                int j=i,k=i;
                while(k<n-1&&s[k+1]==s[k])++k;
                i=k+1;
                while(k<n-1&&j>0&&s[k+1]==s[j-1]){++k;--j;}
                if(k-j+1>maxl){maxl=k-j+1;start=j;}
            }
        return s.substr(start,maxl);
        }
}
};