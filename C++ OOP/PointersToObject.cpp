#include<iostream>
using namespace std;
class samp{
  int a,b;
  public:
      samp(int c,int d){
      a=c;b=d;
      }
      int geta(){
       return a;
       }
   int getb(){
   return b;
   }
};

 int main(){
    samp ob[4] = {samp(1,2),
                samp(3,4),
                samp(5,6),
                samp(7,8)
                    };

    samp *p;
    p = ob;//getting address of first object
    for(int i=0;i<4;i++){
        cout<<p->geta()<<" ";
        cout<<p->getb()<<endl;
        p++;//by incrementing go to the next object
    }

   return 0;
}
