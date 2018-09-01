/*author     :      cedricxs
 *level      :      hard
 */
class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>res;string t;int i=0;int c=0;
        while(i<words.size()){
        while(i<words.size())
        {if((t+words[i]).size()<=maxWidth)
        {t+=words[i++];
            c++;}
         else break;
        }
        int space;string r;
        while(t.size()+c-1>maxWidth){t=t.substr(0,t.size()-words[i-1].size());space=maxWidth-t.size();c--;i--;}
        if(i==words.size()){while(c>0){r+=words[i-c];if(c>1)r+=" ";c--;}while(r.size()<maxWidth)r+=" ";res.push_back(r);c=0;t="";break;}
        else space=maxWidth-t.size();
        while(c>0)//c=3space=8;
        {
            r+=words[i-c];int n=0;
            if(c>1){n=ceil(float(space)/(float(c)-1));space-=n;}
            else if(c==1)n=space;
            while(n--)r+=" ";
            c--;
        }
        res.push_back(r);c=0;t="";
    }return res;
    }
};