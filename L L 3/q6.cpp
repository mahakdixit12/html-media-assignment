class Solution {
public:
ListNode *middle(ListNode *head){
ListNode *fast = head->next;
ListNode *slow = head;
while(fast and fast->next){
fast = fast->next->next;
slow = slow->next;
}
return slow;
}
ListNode* reverse(ListNode *mid){
ListNode *curr = mid;
ListNode *prev = NULL;
while(curr){
ListNode *plus = curr->next;
curr->next = prev;
prev = curr;
curr = plus;
}
return prev;
}
int pairSum(ListNode* head) {
ListNode *mid = middle(head);
int sum = 0;
int maxi = 0;
ListNode *p = reverse(mid);
mid->next = NULL;
ListNode *temp = head;
while(temp and p){
sum = p->val + temp->val;
maxi = max(maxi , sum);
p = p->next;
temp=temp->next;

10

}
return maxi;
}
};