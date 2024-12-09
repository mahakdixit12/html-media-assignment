#include <iostream>
using namespace std;
int main(){

int a,b,c;
cout <<"Enter the sides:";
cin>>a>>b>>c;

if (a==b && b==c){
    cout <<"Equi. triangle" <<endl;
}
else if (a==b || b==c){
    cout <<"Iso. triangle" <<endl;
} 
else {
    cout <<"Scal. triangle" <<endl;
}
return 0;
}
    