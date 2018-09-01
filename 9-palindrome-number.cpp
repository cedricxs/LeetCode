/*author     :      cedricxs
 *level      :      easy
 */
    static const void* ___ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    bool isPalindrome(int x) {
       int b=0;bool m;int t=x;
        if(x<0)m=false;
        else{	while (t!=0)
	{ if((b>214748364)||(b==214748364&&t%10>7)){b=0;break;}
	 b =( b *10+ t % 10);	
	 t = t / 10;
    }
     if(b==x)m=true; 
        else m=false;}
        return m; 
    }
};