#include<iostream>
using namespace std;
class car{
int speed;
public:
    car(int s);
    void show();
};
car :: car(int s){
    speed = s;
}
void car :: show(){
  cout<<"speed:"<<speed<<endl;
}

int main(){
car c(40);
c.show();
return 0;
}
