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
static const auto _____ = []() 
{     
    ios::sync_with_stdio(false);     
    cin.tie(nullptr);     
    return nullptr;
}();
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)return head;
        ListNode*h=head;
        ListNode*H=new ListNode(0);
        H->next=h;ListNode*pre=H,*sh;
        for(h;h!=NULL;h=h->next)
        {   if(h->next&&h->val==h->next->val) 
            while(h->next&&h->val==h->next->val){h=h->next;sh=h->next;
             pre->next=sh;}
             else pre=h;
        }
        return H->next;
    }
};