#include <iostream>
#include "cmath"
using namespace std;
int main()
{
    int x;
    double y,f,d,g;
    cin>> x;
    f = x * x ; //2 
    d = f * f; //4
    g = d * f; //6
    y = (g * d) - g + f -2;
    cout<<"Ответ "<< y;
    return 0;
}