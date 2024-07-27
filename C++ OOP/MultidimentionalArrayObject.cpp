#include<iostream>
using namespace std;
class samp{
  int a;
  public:
      samp(int b ){
         a=b;
      }
      double get(){
        return a;
      }
};

int main(){
  samp ob[4][2] = {1,2,3,4,5,6,samp(7),samp(8)};

  for(int i = 0; i<4;i++){
    cout<<ob[i][0].get() <<" ";
    cout<<ob[i][1].get()<<endl;
  }


}
