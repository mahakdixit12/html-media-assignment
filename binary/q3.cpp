#include<bits/stdc++.h>
using namespace std;
int first(vector<int>&arr, int low, int high){
if(high >= low){
// Get the middle index
int mid = low + (high - low)/2;
// Check if the element at middle index is first 1
if ( ( mid == 0 || arr[mid-1] == 0) && arr[mid] == 1)
return mid;
// If the element is 0, recur for right side
else if (arr[mid] == 0)
return first(arr, (mid + 1), high);
// If element is not first 1, recur for left side
else
return first(arr, low, (mid -1));
}
return -1;
}
int rowWithMax1s(vector<vector<int>>&a){
// Initialize max values