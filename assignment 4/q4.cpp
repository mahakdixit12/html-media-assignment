#include <iostream>
using namespace std;
int main(){

float a, b;
cout<<"Enter the sides:";
cin>>a>>b;
float a = a*b ;
float p= 2*(a+b);
if(a>p){
    cout<<"Area is greater than perimeter."  <<endl;

} else {
    cout <<"Perimeter is greater area."  <<endl;
}
return 0;
}
    