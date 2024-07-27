#include <iostream >
using namespace std ;
void f( int *n ) ; // use a pointer parameter
int main ()
{
    int i = 0;
    f(&i) ;
    cout << " Here is i's new value : " << i << "\n" ;
    return 0;
}
void f ( int *n )
{
  *n = 100; // put 100 into the argument pointed to by n
}
