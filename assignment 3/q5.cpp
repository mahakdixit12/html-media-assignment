#include <iostream>
using namespace  std;
int main(){
    int a,b,c;
    cout<<"Enter the numbers:";
    cin>>a>>b>>c;

    if (a<=b && a<=c){
        cout<<a <<"is the smallest" <<endl;
    }
    else if (b<=c && b<=a) {
        cout <<b <<"is the smallest" <<endl;
    }
    else {
        cout<<c <<"is the smallest";
    }
    return 0;

}