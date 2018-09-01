/*author     :      cedricxs
 *level      :      hard
 */
class Solution {
public://merge h1 and h2 ,result is h1
    ListNode* merge(ListNode*h1,ListNode*h2)
    {
        if(!h1)return h2;
        if(!h2)return h1;
        if(h1->val>h2->val)swap(h1,h2);
        ListNode*p1=h1,*p2=h2,*pre=h1;
        for(;p2!=NULL;)
        {
            if(!p1){pre->next=p2;break;}
         else if(p2->val>=p1->val){pre=p1;p1=p1->next;} //chercher la pos ou insert
         else {ListNode*t=new ListNode(p2->val);
               pre->next=t;t->next=p1;
               pre=t;p2=p2->next;
              }
        }    
        return h1;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty())return NULL;
        if(lists.size()==1)return lists[0];
        ListNode*start=lists[0];
        for(int i=1;i<lists.size();i++)
        {   
            start=merge(lists[i],start);
        }    
            return start;
    }
};