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
static const void* ___ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int co=0;
        ListNode*r=new ListNode((l1->val+l2->val)%10);
        if(l1->val+l2->val>=10)co=1;
        ListNode*h=r;
        l1=l1->next;l2=l2->next;
    while(l1!=NULL&&l2!=NULL)
     {
        ListNode*p=new ListNode((l1->val+l2->val+co)%10);
        if(l1->val+l2->val+co>=10)co=1;
        else co=0;
        r->next=p;
        r=p;
         l1=l1->next;
         l2=l2->next;
     }
        for(l1;l1!=NULL;l1=l1->next)
        {
          ListNode*p=new ListNode((l1->val+co)%10);
        if(l1->val+co>=10)co=1;
        else co=0; 
         r->next=p;
        r=p;
        }
        for(l2;l2!=NULL;l2=l2->next)
        {
          ListNode*p=new ListNode((l2->val+co)%10);
        if(l2->val+co>=10)co=1;
        else co=0; 
         r->next=p;
        r=p;
        }
        if(co==1)
        {
            ListNode*p=new ListNode(1);
            r->next=p;
}
        return h;
        
        
    }
};