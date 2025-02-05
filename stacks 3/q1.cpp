class Solution {
public:
int calPoints(vector<string>& op) {
stack<int>s;
for(int i=0;i<op.size();i++){
if(op[i].size() > 1 or (op[i].size() == 1 and op[i][0] >= '0'
and op[i][0] <= '9'))s.push(stoi(op[i]));
else if(op[i] == "C")s.pop();
else if(op[i] == "D")s.push(2*s.top());
else {
int val1 = s.top();
s.pop();
int sum = val1 + s.top();
s.push(val1);
s.push(sum);
}
}
int sum = 0;
while(!s.empty()){