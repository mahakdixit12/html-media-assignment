#include <iostream>
using namespace std;
int main(){

float r;
cout<<"Enter the value of r:";
cin>>r;
float a = 3.14*r*r;
float c= 2*3.14*r;
if(a>c){
    cout<<"Area is greater" <<" " <<a <<endl;

} else {
    cout <<"Circumfarence is greater"  <<" "<<c <<endl;
}
return 0;
}
    