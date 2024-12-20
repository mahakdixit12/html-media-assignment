#include <iostream>
using namespace std;
int count(int n){
    int count=0;
    while(n>0){
        n=n/10;
        count = count +1;
    }
    int y= count * count ;
    cout<<y;
    return y;
}
    
int main() {
    int n;
    cout<<"Enter a number:";
    cin>>n;
    count(n);
}