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
    ListNode* partition(ListNode* head, int x) {
       ListNode node1(0), node2(0);
    	ListNode *smaller = &node1, *bigger = &node2;
    	while(head){
    		if(head->val < x){
    			smaller = smaller->next = head;
    		}else{
    			bigger = bigger->next = head;
    		}
    		head = head->next;
    	}
    	bigger->next = NULL;
    	smaller->next = node2.next;
    	return node1.next;
    }
};