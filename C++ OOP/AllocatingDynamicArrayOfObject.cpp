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

  ~samp(){
  cout<<"Destroying....\n";
  }

};

int main(){
  samp *p;
  p = new samp[5];

  for(int i=1;i<=5;i++){
    p[i].set(i,i);
    cout<<p[i].get()<<endl;
  }
 delete []p;

 return 0;
}
