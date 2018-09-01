/*author     :      cedricxs
 *level      :      hard
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
static auto x = [](){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
        vector<Interval>res;
        if(intervals.empty()){res.push_back(newInterval);return res;}
        int i=0;
        for(;i<intervals.size();i++)
        {
            if(newInterval.start>intervals[i].end){res.push_back(intervals[i]);}
            else if(newInterval.end<intervals[i].start)break;
            else {newInterval.start=min(intervals[i].start,newInterval.start);newInterval.end=max(intervals[i].end,newInterval.end);}
        }
        res.push_back(newInterval);
        for(;i<intervals.size();i++)
            res.push_back(intervals[i]);
        return res;
    }
};
