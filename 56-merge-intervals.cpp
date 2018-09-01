/*author     :      cedricxs
 *level      :      middle
 */
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
static const auto _____ = []()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	return nullptr;
}();
class Solution {
public:
    vector<Interval> merge(vector<Interval>& intervals) {
        vector<Interval>res;if(intervals.empty())return res;
        sort(intervals.begin(),intervals.end(),[&](Interval a,Interval b)->bool{return a.start<b.start;});
        bool alive[intervals.size()];
        memset(alive,true,intervals.size()*sizeof(bool));
        for(int i=0;i<intervals.size();)
        {if(alive[i]){
            Interval temp=intervals[i];
            while(temp.end>=intervals[i].start&&i<intervals.size()){temp.end=max(temp.end,intervals[i].end);alive[i]=false;i++;}
            res.push_back(temp);}
        }
        return res;
    }

};