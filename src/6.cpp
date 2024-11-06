#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    int n;
    cout << "Введите целое число n: ";
    cin >> n; 

    double s = 0.0; 

    for (int i = 0; i <= n; ++i) {
        s += 1 / cos(7 * i * M_PI / 180); 
        if (i > 0) {
            s += cos(7 * i * M_PI / 180); 
        }
    }

    cout << "Значение суммы s: " << s << endl; 
    return 0;
}