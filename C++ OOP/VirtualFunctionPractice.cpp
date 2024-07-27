#include<iostream>
using namespace std;
class base{
  public:
      int i;
      base(int x){i=x;}
       virtual int func(){return i;}
};
class derived1 : public base{
 public:
     int j;
     derived1(int y):base(y)
     {j = y;}
     int func(){return i+i;}
};
class derived2 : public base{
 public:
     derived2(int z):base(z)
     {i = z;}
     int func(){return i*i;}
};

int main(){
   base *p;

   derived2 d2(10);
   derived1 d1(10);
   base b;
   p = &b;

   cout<<"Base:"<<p->func();

   p = &d1;
  cout <<"derived1:"<< p->func();

   p = &d2;
  cout<<"derived2:"<< p->func();


return 0;
}
