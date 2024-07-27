#include <iostream>
using namespace std ;

template <class type1,class type2> // template <typename type1,class type2>    template<class type1,class type2> - both are valid
void myfunc ( type1 x , type2 y )
{
  cout << x << "  " << y << endl ;
}

int main ()
{
  myfunc(10, " hi " ) ;
  myfunc(0.23,10) ;
  myfunc(5,5);

return 0;
}
