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
static vector<string> strs = [](){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return vector<string>{};
}();  
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head||k==0)return head;
        ListNode*h=new ListNode(0);
        auto i=head,pre=head;int len=0;
        for(;i!=NULL;i=i->next)len++;
        auto c=len-k%len;
        if(len==1||c==len)return head;
        for(i=head,len=0;i!=NULL;pre=i,i=i->next,len++){if(len==c){h->next=i;pre->next=NULL;}}
        pre->next=head;
        return h->next;
        
        
            
    }
};