#include<iostream>
using namespace std;
class A{
 private:
     int k;
 public:
    A(int x){ k=x; }
    void display(){
    cout<<"k="<<k<<endl;}
  A(A &ob){
   k = ob.k;
  }
};


int main(){
    A ob1(33);
    A ob2(ob1);

    ob1.display();
    ob2.display();

return 0;
}
