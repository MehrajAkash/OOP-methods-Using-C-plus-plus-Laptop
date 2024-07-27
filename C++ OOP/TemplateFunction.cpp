#include<iostream>
using namespace std;

template<class in> //making data type -in
in func(in x,in y){
   return x>y?x:y;
   }

int main(){

    cout<< func<int>(8,22) <<endl;//22
    cout<< func<double>(2,8.5) <<endl;//8.5
    cout<< func<char>('a','h') <<endl; //h
    cout<< func<string>("Zkash","MehrajHossain");//Zkash - bacuase Z>M;


   return 0;
}
