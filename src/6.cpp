#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    int n;
    cout << "Введите целое число n: ";
    cin >> n; 

    double s = 0.0; 
    double sum_cos = 0.0;
    
    for (int i = 1; i <= n; ++i) {
        sum_cos += cos(7 * i); 
        s += 1.0 / sum_cos;
    } 
    cout << "Значение суммы s: " << s << endl; 
    return 0;

}