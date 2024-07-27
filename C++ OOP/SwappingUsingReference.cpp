#include<iostream>
using namespace std;
void f(int &i,int &j){
  int k;
  k=i;
  i=j;
  j=k;
}

int main(){

 int m=20,n=40;
 cout<<"Before swapping: m="<<m <<"  n="<<n<<endl;

 f(m,n);
 cout<<"After swapping: m="<<m <<"  n="<<n<<endl;

}
