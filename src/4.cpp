#include <iostream>
#include <cmath>
using namespace std;
int main()
{   
    double x,r;
    cout<<"x= ";
    cin>>x;
    if ( -2.5 <= x && x <= 2.5 )
        r = ( 5/4 * (pow (x, 4)));
    else if (x > 2.5 )
        r = ((sqrt (2 * x) + 1)) ;
    else
        r = (sin(M_PI * abs (x)))/(x -3) ;
    cout  << r << endl;
 
    return 0;
}