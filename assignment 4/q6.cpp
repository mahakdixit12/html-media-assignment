#include <iostream>
using namespace std;
int main (){

    int x,y;
    cout <<"Enter x and y:";
    cin>>x>>y;

    if(x==0 && y!=0) cout<<"It lies on y axis." <<endl;
     if(y==0 && x!=0) cout <<"It lies on x axis." <<endl;
    if(x==0 && y==0) cout <<"It lies on origin."<<endl;
    if(x!=0 && y!=0) cout <<"It lies on a plan" <<endl;

    return 0;
}