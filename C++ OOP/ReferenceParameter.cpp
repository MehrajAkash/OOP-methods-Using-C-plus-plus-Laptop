#include<iostream>
using namespace std;
void f(int &n){
   n=100;
 }

int main(){
 int i=0;
 cout<<"i's old value: "<<i<<endl;

 f(i);
 cout<<"i's new value: "<<i<<endl;
}
