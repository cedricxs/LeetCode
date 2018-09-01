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
    ListNode* swapPairs(ListNode* head) {
       if(!head)return NULL;
        ListNode*pre=new ListNode(0);
        for(ListNode*h1=head,*h2=head->next;h1&&h2;)
        {
            
            h1->next=h2->next;
            h2->next=h1;
            pre->next=h2;
            pre=h1;
            if(h1==head)head=h2;
            if(h1->next)h1=h1->next;
            else break;
            if(h1->next)h2=h1->next;
            else break;
        }
        return head;
        
    }
};