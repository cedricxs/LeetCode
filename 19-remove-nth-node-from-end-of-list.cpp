/*author     :      cedricxs
 *level      :      middle
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i=1;ListNode*r=head;
        map<int,ListNode*> l;
        for(i,r;r!=NULL;r=r->next,i++)
        {
            l[i]=r;
        }i--;
        if(i==1) return NULL;
        int pos=i-n+1;
        if(pos==1)head=l[pos+1];
        else if(pos==i) l[pos-1]->next=NULL;
        else l[pos-1]->next=l[pos+1];
        return head;
        
    }
};