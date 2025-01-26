#include <iostream>
using namespace std;
int main(){
int arr[5] = {1,2,3,4,5};
int min = INT_MAX;
for(int i=0;i<5;i++){
min = min(min,arr[i]);
}
cout << min;
return 0;
}