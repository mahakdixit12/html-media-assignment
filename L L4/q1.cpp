class Solution {
public:

1

int length(ListNode *head){
int cnt = 0;
ListNode *temp = head;
while(temp){
cnt++;
temp=temp->next;
}
return cnt;
}
ListNode* reverseKGroup(ListNode* head, int k) {
int len = length(head);
cout<<len<<endl;
if(len < k or !head)return head;
ListNode *dummy = new ListNode(0);
dummy->next = head;
ListNode *curr = dummy;
ListNode *prev = dummy;
ListNode *nex = dummy;
while(len >= k){
curr = prev->next;
nex = curr->next;
for(int i=1;i<k;i++){
curr->next = nex->next;
nex->next = prev->next;
prev->next = nex;
nex = curr->next;
}
prev = curr;
len -= k;
}
return dummy->next;
}
ListNode* swapPairs(ListNode* head) {
return reverseKGroup(head , 2);
}
};