class Solution {
public:
int length(ListNode *head){
int len = 0;
while(head){
head=head->next;
len++;
}
return len;
}
ListNode* reverseKGroup(ListNode* head, int k) {
int len = length(head);
if(!head or len<k)return head;
ListNode *dummy = new ListNode(0);
dummy->next = head;
ListNode* curr = dummy;
ListNode* prev = dummy;
ListNode* nex = dummy;
while(len>=k){
curr = prev->next;
nex = curr->next;
for(int i=1;i<k;i++){
curr->next = nex->next;
nex->next = prev->next;
prev->next = nex;
nex = curr->next;
}
prev = curr;
len-=k;
}
return dummy->next;
}
};