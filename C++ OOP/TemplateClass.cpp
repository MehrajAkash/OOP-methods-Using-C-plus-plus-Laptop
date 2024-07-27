#include<iostream>
using namespace std;
template<typename aa,typename bb>//generic datatype aa,bb
class A{
  aa kg;
  bb gram;
  double ml;
  public:
      void sett(aa i,bb j,double m){
      kg = i; gram = j; ml=m;
      }

      aa gettkg(){
      return kg;}

      bb gettgram(){
      return gram;}

      double getdouble(){
      return ml;}
};

int main(){

    A <int,double>ob1;
    ob1.sett(5,8.223,16.35);
    cout<<"kg:" << ob1.gettkg()<<endl;
    cout<<"gram:"<< ob1.gettgram()<<endl;
    cout<<"ml:" << ob1.getdouble()<<endl<<endl;

    A <string,char>ob2;
    ob2.sett("2 kg",'3',18.35);
    cout<<"Kg:"<<ob2.gettkg()<<endl;
    cout<<"gram:"<<ob2.gettgram()<<endl;
    cout<<"ml:"<<ob2.getdouble()<<endl;

return 0;
}
