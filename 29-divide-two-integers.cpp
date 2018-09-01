/*author     :      cedricxs
 *level      :      middle
 */
static const auto io_speed_up = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor)return 1;
        if(dividend==INT_MIN&&divisor==-1)return INT_MAX;
        long long d=labs(dividend),e=labs(divisor);bool f=(dividend>0)^(divisor>0);
        if(d<e)return 0;
        int r=0;long long t=e;
        while(e<=d)
        {
         int c=1;
         while(e<<1<=d)
         {
            e<<=1;c<<=1;
         }
        r+=c;
            d-=e;
            e=t;
        }
         

         return f?-r:r;
    
    }
};