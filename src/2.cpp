#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int a, b, c;
   cout << "Введите три числа: ";
   cin>>a>>b>>c;
   int sum = a + b;

   (sum>10)
        ? cout<<" Cумма: " << sum << ", Произведение: "<<(a * b * c)<< endl
        : cout << "Наибольшее из первых двух чисел: " << (a > b ? a : b) << endl;
    return 0;

}
