vector<int> nextLargerNodes(ListNode* head) {
stack<ListNode*> st;
ListNode* temp=head;
while(temp!=NULL){
while(!st.empty() && (st.top())->val<temp->val){
ListNode* help=st.top();
st.pop();
help->val=temp->val;
}
st.push(temp);
temp=temp->next;
}
while(!st.empty()){
ListNode* help=st.top();
st.pop();
help->val=0;
}
vector<int> ans;
while(head!=NULL){
ans.push_back(head->val);
head=head->next;
}
return ans;
}