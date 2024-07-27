// Create an abstract class
#include <iostream>
using namespace std ;
class area
{
    protected:
       double dim1 , dim2 ; // dimensions of figure
    public :
    void setarea ( double d1 , double d2 )
    {
       dim1 = d1 ;
       dim2 = d2 ;
    }

    virtual double getarea () = 0; // pure virtual function
};
class rectangle : public area
{
    public :
    double getarea ()
    {
      return dim1 * dim2 ;
    }
};
class triangle : public area
{
    public :
    double getarea ()
    {
      return 0.5 * dim1 * dim2 ;
    }
};
int main ()
{
    area * p ;
    rectangle r ;
    triangle t ;
    r . setarea (3.3 , 4.5) ;
    t . setarea (4.0 , 5.0) ;
    p = & r ;
    cout << " Rectangle has area : " << p -> getarea () << "\n";
    p = & t ;
    cout << " Triangle has area : " << p -> getarea () << "\n";
return 0;
}

