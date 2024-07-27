#include<iostream>
using namespace std;
class samp{
  int x;
  public:
      samp(){x=0;}
      samp(int i){ x=i;}
      int getx(int &i){ i=x; }
      friend samp operator+(int i,samp sp);
};
samp operator+(int i,samp sp){
    samp s;
    s.x = sp.x+i;
    return s;
}
int main(){
  samp o1(8);

  o1 = 10 + o1;
   int a;
   o1.getx(a);
  cout<<"Result: "<<a;

  return 0;
}
