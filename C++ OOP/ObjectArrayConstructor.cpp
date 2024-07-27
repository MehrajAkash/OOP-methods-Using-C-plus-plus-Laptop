#include<iostream>
using namespace std;
class samp{
 int a;//private member
 public:
     samp(int b){
       a = b;
     }
   int get(){
     return a;
     }
};

int main(){
 samp ob[4] = { -1, -3, samp(5), samp(7)};
//ob[0].a = 8; invalid
 for(int i=0;i<4;i++)
 {
     cout<< ob[i].get()<<" ";
 }


}
