/*author     :      cedricxs
 *level      :      hard
 */
class Solution {//aa ab aaba
public:
    multimap<int,int> path;
    void yes(int i,int p1,int p2,bool&have,string s1,string s2,string s3)
    {
        auto p=path.find(p1);
        if(!have&&(p==path.end()||p->second!=p2)){path.insert(make_pair(p1,p2));
       for( ;i<s3.size();)
       {
           if(p1<s1.size()&&s3[i]==s1[p1]&&(p2==s2.size()||s3[i]!=s2[p2]))
           {
               while(p1<s1.size()&&s3[i]==s1[p1]&&(p2==s2.size()||s3[i]!=s2[p2])&&i<s3.size())
               {
                   i++;p1++;
               }
           }
            else if(p2<s2.size()&&s3[i]==s2[p2]&&(p1==s1.size()||s3[i]!=s1[p1]))
            {
                while(p2<s2.size()&&s3[i]==s2[p2]&&(p1==s1.size()||s3[i]!=s1[p1])&&i<s3.size())
                {
                    i++;p2++;
                }
            }
           else if(p1<s1.size()&&p2<s2.size()&&s3[i]==s1[p1]&&s3[i]==s2[p2])
           {
               yes(i+1,p1+1,p2,have,s1,s2,s3);
               yes(i+1,p1,p2+1,have,s1,s2,s3);
               return ;
           }
           else {have=false;return ;}
       }
            have=true;return ;
        }
    else return ;
    }
    bool isInterleave(string s1, string s2, string s3) {
        
        if(s1.size()+s2.size()!=s3.size())return false;
        bool r=false;
        yes(0,0,0,r,s1,s2,s3);
        return r;
    }
};