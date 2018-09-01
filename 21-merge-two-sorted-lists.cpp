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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL){if(l2==NULL)return l1;
                     else l1=l2;}
     else{  for(ListNode* L=l1;;L=L->next)
        {if(L->next==NULL){L->next=l2;break;}}}
        l1=arrange(l1);
        return l1;
    }
    private:
    ListNode* arrange(ListNode* l1)
    { int len=0;for(ListNode* L=l1;L!=NULL;L=L->next)len++;
        for(int i=0;i<len-1;i++)
        for(ListNode* L=l1;L->next!=NULL;L=L->next)
        {  ListNode* pre=L->next;
            if(L->val>pre->val){int temp=pre->val;pre->val=L->val;L->val=temp;}
    }
    return l1;}
};