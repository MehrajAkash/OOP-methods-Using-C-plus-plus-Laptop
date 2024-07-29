#include<iostream>
using namespace std;
class A{
  int a=5;
  public:
      friend void func(A);
};
void func(A ob){
  cout<<"In Friend Function "<<ob.a;
}

int main(){
  A a;
  func(a);

 return 0;
}
