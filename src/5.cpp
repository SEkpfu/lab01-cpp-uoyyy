#include <iostream>
#include <cmath> 
using namespace std;

int main() 
{
    double x,y;
    cin >> x >> y;
//1
    if (x >= 0 && y >= 0 && x <= 8 && y <= 8 && y <= -1 * x + 8) cout<<" YES ";
    else cout<<" NO ";
    cout<<"\n";
//2
     if (x <= 0 && y >= 0 && x >= -4 &&((x * x + y * y) <= 64)) cout<<" YES ";
     else cout<<" NO ";
     cout<<"\n";
//3
    if ((x < 0 && y < 0)&&(x * x + y * y) <= 64) cout<<" YES ";
    else cout<<" NO ";
    cout<<"\n";
//4
    if (x >= 0 && y <= 0 && x <= 8 && y >= -8 && y >=  x - 8) cout<<" YES ";
    else cout<<" NO ";
    cout<<"\n";
    return 0;
}