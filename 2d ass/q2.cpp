#include<iostream>
using namespace std;
int main(){
int n , m;
cout << "Enter the number of rows : ";
cin >> n;
cout << "Enter the number of columns : ";
cin >> m;
int a[n][m];
cout << "Enter the first matrix : "<<endl;
for(int i = 0 ; i < n ; i++){
for(int j = 0 ; j < m ; j++){
cin >> a[i][j];
}
}
int b[n][m];
cout << "Enter the second matrix : "<<endl;
for(int i = 0 ; i < n ; i++)}