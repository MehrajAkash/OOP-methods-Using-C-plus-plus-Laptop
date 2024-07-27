#include<iostream>
using namespace std;
class coord{
   int x,y;
   public:
      // coord (){ x=0; y=0;}
       coord(int i,int j){ x=i; y=j;}
       int getxy(int &i,int &j){ i=x; j=y;}
       coord operator+(coord ob);
       coord operator=(coord ob);
};
 coord coord :: operator+(coord ob){
  coord temp;
  temp.x = x + ob.x;
  temp.y = y + ob.y;
  return temp;
}
coord coord :: operator=(coord ob){
  x=ob.x;
  y=ob.y;
  return ob; // return *this;
}
int main(){
 coord c1(10,6),c2(5,3),c3;
 c3=c1+c2;
 int x,y;
c3.getxy(x,y);
 cout<<"(c1+c2) X="<<x<<"  Y="<<y<<endl;

 c3=c2;// c1=c2 also valid
 c3.getxy(x,y);
 cout<<"(c3) X="<<x<<"  Y="<<y<<endl;
return 0;
}
