// A simple example using a virtual function .
#include <iostream>
using namespace std ;
class base
{
public :
int i ;
base ( int x ) { i = x ; }
 void func ()
{
cout << " Using base version of func () : " ;
cout << i << "\n";
}
};
class derived1 : public base
{
public :
derived1 ( int y ) : base ( y ) {}
void func ()
{
cout << " Using derived1 ’s version of func () : " ;
cout << i * i << "\n";
}
};
class derived2 : public base
{
public :
derived2 ( int z ) : base ( z ) {}
void func ()
{
cout << " Using derived2 ’s version of func () : " ;
cout << i + i << "\n";
}
};
int main ()
{
base *p ;

derived1 d_ob2 (10) ;
derived2 d_ob1 (10) ;
base ob(2);
p = & ob ;
p -> func () ; // use base ’s func ()
p = & d_ob1 ;
p -> func () ; // use derived1 ’s func ()
p = & d_ob2 ;
p -> func () ; // use derived2 ’s func ()
return 0;
}
