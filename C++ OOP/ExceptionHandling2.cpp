#include<iostream>
using namespace std;
void func(int a){

 try{
    cout<<"In try block"<<endl;
     if(a==1){ throw a;}
      if(a==2){ throw 2.22;}
     if(a==3){ throw "three";}
  }
   catch(char const* c){
   cout<<"Caught is: "<< c <<endl;
  }
  catch(int i){
   cout<<"Caught is: "<< i <<endl;
  }
  catch(double j){
   cout<<"Caught is: "<< j <<endl;
  }

}

int main(){

    func(1);
    func(2);
    func(3);
 return 0;
}

