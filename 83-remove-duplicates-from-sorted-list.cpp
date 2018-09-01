/*author     :      cedricxs
 *level      :      easy
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
    ListNode* deleteDuplicates(ListNode* head) {
        list<int> p;
        if(head==NULL)return NULL;
        for(ListNode* L=head;L!=NULL;L=L->next)
        {
p.push_back(L->val);
        }
        p.unique();
        ListNode* r=new ListNode(p.front());
        list<int>::iterator it=p.end();
        for(it--;it!=p.begin();it--)
        {
            ListNode* temp=new ListNode(*it);
            temp->next=r->next;
            r->next=temp;
        }
        return r;
    }
};