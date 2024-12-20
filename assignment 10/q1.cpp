#include <iostream>
using namespace std;
int square( int n){
    int s ;
    for(int i=1; i<=n; i++){
        s = i*i;
        cout << s <<endl;
    }
   return s; 
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    square(n);
}