#include<iostream>
using namespace std;

template<class in> // template<typename in>  -is also valid.
in func(in &x,in &y){
    in temp;
    temp = x;
    x = y;
    y = temp;
}
int main(){
  int i=5,j=8;
  double k=11,l=33;

  cout<<"Before swapping  i="<<i<<"  j="<<j<<endl;
  cout<<"Before swapping  k="<<k<<"  l="<<l<<endl;

  func(i,j); func(k,l);

   cout<<"After swapping  i="<<i<<"  j="<<j<<endl;
  cout<<"After swapping  k="<<k<<"  l="<<l<<endl;

}
