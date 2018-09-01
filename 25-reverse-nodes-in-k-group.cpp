/*author     :      cedricxs
 *level      :      hard
 */

static int x=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void reverse(ListNode*start,ListNode*end)
    {
        while(1)
        {
            ListNode*i;
            swap(start->val,end->val);
            for(i=start;i->next!=end;i=i->next);
            end=i;
            start=start->next;
            if(start==end||end->next==start)break;
        } 
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1)return head;
        ListNode*start=head,*end=start;
        while(start&&end){
            for(int i=0;i<k-1&&end!=NULL;i++)end=end->next;                
            if(start&&end)reverse(start,end);
            if(end){start=end->next;end=start;}
        }
        return head;
    }
};