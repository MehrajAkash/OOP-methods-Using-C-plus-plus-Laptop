#include<iostream>
using namespace std;
class A{
 private:
     int id=106;
     string name="Mehraj";
 //public:
    friend class B;
};
class B{
    public:
  void display(A ob){
   cout<<ob.id<<"  "<<ob.name<<endl;
  }

};


int main(){
 A oba;
 B obb;
 obb.display(oba);

return 0;
}
