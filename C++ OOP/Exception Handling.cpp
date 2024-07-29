#include<iostream>
using namespace std;
int main(){

 try{
  int a,b;
  cout<<"Enter Two number: "<<endl;
  cin>>a>>b;

  if(a==1||b==1){
    throw "Exception";
  }

  cout<<"Successfully finished"<<endl;
 }

 catch(...){
     cout<<"Error";
 }


return 0;
}
