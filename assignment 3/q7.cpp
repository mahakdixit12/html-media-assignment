#include <iostream>
using namespace  std;
int main(){
    int a,b,c;
    cout<<"Enter the numbers:";
    cin>>a>>b>>c;

    if (a<=b && a<=c){
        cout <<"Student A has the minimum marks." <<endl;
    }
    else if (b<=c && b<=a) {
        cout  <<"Student B has the minimum marks." <<endl;
    }
    else {
        cout <<"Student C has the minimum marks.";
    }
    return 0;

}