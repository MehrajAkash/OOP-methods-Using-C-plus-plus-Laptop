#include<iostream>
using namespace std;
class samp{
  int a,b;
  public:
      void set(int c,int d){
        a=c; b=d;
        }
        int get(){
         return a*b;
         }
};

int main(){

 samp *ob;
 ob = new samp;
 ob->set(4,5);
 cout<<ob->get()<<endl;//20

 delete ob;
cout<<ob->get()<<endl;//0

return 0;
}
