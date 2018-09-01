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
static int x = [](){ 
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);  
    return 0; 
}();
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(!head)return head;
        int pos=1;
        for(auto h=head;h!=NULL&&m<n;h=h->next)
        {if(pos==m)
            {
                int p2=m;
                auto h1=h;
                while(p2<n&&h1->next!=NULL){h1=h1->next;p2++;}
                swap(h1->val,h->val);
                m++;n--;pos++;
            }
         else pos++;
        }
        return head;
    }
};