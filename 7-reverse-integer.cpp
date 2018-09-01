/*author     :      cedricxs
 *level      :      easy
 */
static int x = []() { 
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);  
    return 0; 
}();
class Solution 
{
public:
    int reverse(int x) 
{
    int b=0;
	while (x!=0)
	{ if((b>214748364)||(b==214748364&&x%10>7)||(b<-214748364)||(b==-214748364&&x%10<-8)){b=0;break;}
	 b =( b *10+ x % 10);	
	 x = x / 10;
       
}
        return b;
}
};