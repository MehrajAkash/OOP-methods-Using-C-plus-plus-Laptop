#include<iostream>
using namespace std;
class B1{
  int a;
  public:
      B1(int x){a=x; cout<<"Constructor B1"<<endl; }
      ~B1(){cout<<"Destructor B1"<<endl;}
      int showa(){ return a;}
};
class B2{
  int b;
  public:
      B2(int y){b=y; cout<<"Constructor B2"<<endl;}
      ~B2(){cout<<"Destructor B2"<<endl;}
      int showb(){ return b;}
};
class D1 : public B1,public B2{
 int c;
 public:
     D1(int x,int y,int z):B1(x),B2(y){
        cout<<"Constructor D1"<<endl; c=z;
     }
     ~D1(){cout<<"Destructor D1"<<endl;}
     int showc(){
     cout<<"a="<<showa()<<"   b="<<showb()<<"   c="<<c<<endl;
     }
};
int main(){
 D1 d(3,5,7);
 d.showc();

return 0;
}
