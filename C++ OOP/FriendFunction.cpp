#include<iostream>
using namespace std;
class car{
  int speed;
  public:
      car(int s){ speed=s;}
      friend string stest(car o);
};
string stest(car o){
  if(o.speed>100){
    return "Overspeed";
  }
  if(o.speed<100 && o.speed>0){
    return "SafeJourney";
  }
}

int main(){
car c(102),c2(50);
cout<<stest(c)<<endl;
cout<<stest(c2)<<endl;

return 0;
}
