/*author     :      cedricxs
 *level      :      easy
 */
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len=strs.size();
        if(len==0) return "";
        if(len==1) return strs[0];
       else {int x=strs[0].size();int temp=0;string m;
             for(int i=1;i<len;i++)
             {
                 if(strs[i].size()<x)x=strs[i].size();
             }
          	m = test(strs, x, len, m);
                   return m; }
      
    }
    private:string test(vector<string> & strs,int x,int len,string m)
{
	int temp = 0; int l=1;
	for (int i = 0; i < x; i++)
	{
		for (int j = 1; j < len; j++)
		{
			if (strs[0][i] == strs[j][i])temp = 1;
			else { temp = 0; break; }
		}
		if (temp == 1)   m. assign(strs[0], 0, 1+i);
		else break;
	}
	return m;
}
};