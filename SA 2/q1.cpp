class Solution {
public:
int numOfSubarrays(vector<int>& a, int k, int th) {
int n = a.size();
int sum = 0;
int avg = 0;
int ans = 0;
for(int i=0;i<k;i++)sum += a[i];
avg = sum/k;
if(avg >= th)ans++;
int i=k;
while(i < n){
sum -= a[i-k];
sum += a[i];
avg = sum/k;
if(avg >= th)ans++;
i++;
}