//A function can be a member of one class and a friend of another.
#include<iostream>
using namespace std;
class truct;// a forward declaration.
class car{
   int speed;
 public:
     car(int s){ speed=s;}
     string sptest(truct t);
};
class truct{
   int speed;
 public:
     truct(int s){ speed=s;}
    friend string car::sptest(truct t);
};
string car :: sptest(truct t){
  if(speed > t.speed){  // here variable 'speed' is the member of car class; Because here car's sptest method() declared as a normal method.
    return "Car is faster vehicle.";
  }
  if(speed < t.speed){
    return "Truct is faster than Car!!";
  }
}

int main(){
    car c(98),c2(48);
    truct t(88),t2(85);
    cout<<"Firt output"<<endl;
    cout<<c.sptest(t)<<endl<<endl;

    cout<<"Second output"<<endl;
    cout<<c2.sptest(t)<<endl;

return 0;
}
