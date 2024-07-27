#include<iostream>
using namespace std;
class coord{
    int x;
    public:
  coord(){x=0;}
  coord(int i){x=i;}
coord operator++();
int display(int &i){
    i=x;
}
};
coord coord::operator++(){
  x++;
  return *this;
}

int main(){
 coord c(5);
 ++c;
 int a;
 c.display(a);
 cout<<a<<endl;
// d.display();

return 0;
}
