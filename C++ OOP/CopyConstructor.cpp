#include<iostream>
using namespace std;
class area{
  int a,b;
  public:
      area(int i,int j){ a=i; b=j; }
    void display(){
    cout<<"Area:"<<a*b<<endl;
    }

    area(area &ob){ //copy constructor
        cout<<"Copy constructor called"<<endl;
     a=ob.a+1; //2+1
     b=ob.b+1; //3+1
     }
};
int main(){
area a(2,3);
area ob(a); //area ob=a; copying object

a.display();
ob.display();

return 0;
}
