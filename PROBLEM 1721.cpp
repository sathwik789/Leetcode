/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if(head == NULL || head ->next == NULL){
            return  head;
        }
        ListNode* first = head;
        ListNode* second = head;
        ListNode* mark = head;
        for(int i =1;i<k;i++){
            first = first ->next;
        }
        mark = first;
        while(first ->next != NULL){
            second = second->next;
            first = first ->next;
        }
        swap(mark->val, second->val);
        return head;
    }
};
