#include <iostream>
using namespace std;
int odd(int a, int b){
    int i;
    for( i=a; i<=b; i++){
        if (i%2!= 0) cout<<i <<endl;
    }
    return;
}
int main (){
    int a, b;
    cout<<"enter the first no:";
    cin>>a;
    cout<<"Enter the second no:";
    cin>>b;
    odd(a,b);
}