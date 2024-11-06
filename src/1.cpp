#include <iostream>
#include "cmath" 
using namespace std;
 
int main()
{
    double h, d;
    double V,s,r;

    r=d/2;
    cin>>h;
    cin>>d;
    V=(3.14*r*r*h)/3;
    s=M_PI*r*r+M_PI*r*sqrt(r*r+h*h);
    cout<<"Площадь"<<s;
    cout<<"Объём"<<V;
    return 0;
}
