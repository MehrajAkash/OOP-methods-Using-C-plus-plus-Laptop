// Overload the + relative to coord class
#include <iostream>
using namespace std ;
class coord
{
    int x , y ; // coordinate values
    public :
    coord () { x =0; y =0; cout<<"coord1 "<<x<<endl;}//used for temp and o3 blank objects
    coord ( int i , int j ) { x = i ; y = j ; cout<<"coord2 "<<x<<endl; }
    void get_xy ( int &i , int &j ) { i = x ; j = y ; }
    coord operator +( coord ob3 );
};
// Overload + relative to coord class .
coord coord :: operator +( coord ob3 )
{
    coord temp;
    temp.x = x + ob3.x ;// temp.x = 19
    temp.y = y + ob3.y ;// temp.y =17

    return temp;
}

int main ()
{
    coord o1(10,10),o2(5,3),o3(4,4),o4;
    int x,y ;
    o4 = o1 + o2+o3 ; // add two objects - this calls operator +
    o4.get_xy (x,y) ;
    cout << "(o1+o2)  X:" << x << ",  Y:" << y << " \n " ;
return 0;
}
