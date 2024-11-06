#include <iostream>
using namespace std;
int main() {
    int n; 
    cout << "Введите количество целых чисел: ";
    cin >> n; 
    int sum123 = 0; 
    int countDiv5 = 0; 
    int sumStart7 = 0; 
    int countStart7 = 0; 
    int number; 

    
    for (int i = 0; i < n; ++i) {
        cout << "Введите целое число " << (i + 1) << ": ";
        cin >> number; 

        // a) Проверяем, заканчивается ли число на 123
        if (number % 1000 == 123) {
            sum123 += number; 
        }

        // b) Проверяем, кратно ли число 5
        if (number % 5 == 0) {
            countDiv5++; 
        }

        // c) Проверяем, начинается ли число на 7
        while(number > 0) {
            number /= 10;
            if(number == 7) 
             
            sumStart7 += number; 
            countStart7++; 
        }
    }

   
    cout << "Сумма чисел, заканчивающихся на 123: " << sum123 << endl;
    cout << "Количество чисел, кратных 5: " << countDiv5 << endl;

    // Вычисляем и выводим среднее арифметическое чисел, начинающихся на 7
    if (countStart7 > 0) {
        double averageStart7 = static_cast<double>(sumStart7) / countStart7; 
        cout << "Среднее арифметическое чисел, начинающихся на 7: " << averageStart7 << endl;
    } else {
        cout << "Нет чисел, начинающихся на 7." << endl;
    }

    return 0; 
}