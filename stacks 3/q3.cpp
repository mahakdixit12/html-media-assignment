class Solution {
public:
int largestRectangleArea(vector& arr) {
int n = arr.size();
int nsi[n];
stack st;
nsi[n-1] = n;
st.push(n-1);

for(int i=n-2;i>=0;i--){
while(st.size()>0 && arr[st.top()]>=arr[i]) st.pop();
if(st.size()==0) nsi[i] = n;
else nsi[i] = st.top();
st.push(i);
}
int psi[n];
stack gt;
psi[0] = -1;
gt.push(0);
for(int i=1;i<n;i++){
while(gt.size()>0 && arr[gt.top()]>=arr[i]) gt.pop();
if(gt.size()==0) psi[i] = -1;
else psi[i] = gt.top();
gt.push(i);
}
int maxArea = 0;
for(int i=0;i<n;i++){
int height = arr[i];
int breadth = nsi[i] - psi[i] - 1;
int area = height * breadth;
maxArea = max(maxArea,area);
}
return maxArea;
}
int maximalRectangle(vector>& a) {
int n = a.size();
int m = a[0].size();
vectorrow(m , 0);
int maxArea = 0;
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
if(a[i][j] == '1')row[j] += 1;

else row[j] = 0;
}
maxArea = max(maxArea , largestRectangleArea(row));
}
return maxArea;
}
};