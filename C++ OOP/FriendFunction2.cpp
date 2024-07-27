#include<iostream>
using namespace std;
class truct; //a forward declaration.
class car{
int speed;
public:
    car(int s){ speed=s;}
  friend string sptest(car a,truct b);
};

class truct{
int speed;
public:
    truct(int s){ speed=s;}
  friend string sptest(car a,truct b);
};

string sptest(car a,truct b){
  if(a.speed>b.speed){
    return "Car is faster than truct.";
  }
  if(a.speed<b.speed){
    return "Truct is faster than Car!!";
  }
}

int main(){
  car c(105),c2(44);
  truct t(80),t2(93);

cout<<"Comparing first car & truct.."<<endl;
  cout<<sptest(c,t)<<endl<<endl;

cout<<"Comparing second car & truct.."<<endl;
  cout<<sptest(c2,t2)<<endl;

return 0;
}
