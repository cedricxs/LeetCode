/*author     :      cedricxs
 *level      :      easy
 */
class Solution {
public:
    string countAndSay(int n) {
	string x = "1";
	for(int j=0;j<n-1;j++)
	for (int i = 0; i < x.size(); i++)
	{
		char temp=x[i];
		int count = count_(i, temp, x);
		if (count == 1) {
			x.insert(i, "1"); i++;
		}
		else {
			string  p = to_string(count); 
			x.erase(i + 1, count - 1); x.insert(i, p);
			i+=p.size();
		}
	}return x;
}
    private:
    int count_(int i,char temp, string x)
{
	int count = 0;
	for (int j = i; j < x.size() ; j++)
	{
		if (x[j] == temp)count++;
		else break;
	}
	return count;
}
        
    
};