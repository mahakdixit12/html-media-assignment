#include <iostream>
using namespace std;
int main(){

float r;
cout<<"Enter the value of r:";
cin>>r;
float a = 3.14*r*r;
float c= 2*3.14*r;
if(a>c){
    cout<<"Area is greater than Circumfarence." <<endl <<"Explanation: area =3.14*" <<r*r <<"="<<a <<"units"<<endl  <<"Perimeter= 2*3.14*" <<r <<"=" <<c <<"units"<<endl  <<"Therefore area > perimeter" <<endl;

} else {
    cout <<"Circumfarence is greater than area."  <<endl <<"Explanation: area =3.14*" <<r*r <<"="<<a <<"units"<<endl  <<"Perimeter= 2*3.14*" <<r <<"=" <<c <<"units"<<endl  <<"Therefore perimeter > area" <<endl;

}
return 0;
}
    