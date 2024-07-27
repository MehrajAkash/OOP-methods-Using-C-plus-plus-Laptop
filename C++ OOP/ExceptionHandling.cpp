#include<iostream>
using namespace std;

int main(){

  try{
    cout<<"In try block"<<endl;
     throw 15;
  }

  catch(int a){
   cout<<"Caught is: "<< a<<endl;
  }


 return 0;
}
