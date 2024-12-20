#include <iostream>
using namespace std;
int area(int r){
    int a;
    a = 3.14*r*r;
    return a;
}
int main(){
    int r;
    cout<<"Enter the value of radius :";
    cin>>r;
    cout<< "The area of the circle is =";
    cout<<area(r) << endl;
}