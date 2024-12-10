#include <iostream>
using namespace std;
int main(){

int a,b,c;
cout <<"Enter the sides:";
cin>>a>>b>>c;

if (a==b && b==c){
    cout <<"This is an equilateral triangle." <<endl;
}
else if (a==b || b==c){
    cout <<"This is an isoscles triangle." <<endl;
} 
else {
    cout <<"This is a scalen triangle." <<endl;
}
return 0;
}
    