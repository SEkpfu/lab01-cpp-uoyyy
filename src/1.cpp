#include <iostream>
#include <cmath> 
using namespace std;

const double PI = 3.14159265358979323846;

int main()
{
    double h, d;
    cout << "Введите высоту конуса: ";
    cin >> h; 
    cout << "Введите диаметр основания конуса: ";
    cin >> d; 

    double r = d / 2.0; 
    double V = (1.0 / 3.0) * PI * r * r * h; 
    double s = (pow(r, 2) * PI) + (PI * r) * (sqrt(pow(r, 2) + pow(h, 2))); // Площадь поверхности

    cout << "Площадь: " << s << endl; 
    cout << "Объём: " << V << endl; 
    return 0;
}
