class Solution {
public:
ListNode* swapNodes(ListNode* head, int k) {
ListNode *temp = head;
k--;
while(k--)temp = temp->next;
ListNode *p1 = temp->next , *p2 = head;
while(p1){
p1 = p1->next;
p2 = p2->next;
}
swap(temp->val , p2->val);
return head;
}
};