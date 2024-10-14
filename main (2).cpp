/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //Integer15
    int number;
    // Введення тризначного числа
    cout << "Введіть тризначне число: ";
    cin >> number;

    // Витягуємо сотні, десятки і одиниці
    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int ones = number % 10;

    // Переставляємо сотні і десятки
    int new_number = tens * 100 + hundreds * 10 + ones;

    // Виведення результату
    cout << "Число після перестановки: " << new_number << endl;
    
    //Integer35
    int x1, y1, x2, y2;

    // Введення координат першого і другого полів
    cout << "Введіть координати першого поля (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Введіть координати другого поля (x2, y2): ";
    cin >> x2 >> y2;

    // Перевіряємо, чи мають поля однаковий колір
    // Якщо сума координат (x1 + y1) і (x2 + y2) парна або непарна одночасно, то колір однаковий
    bool same_color = ((x1 + y1) % 2 == (x2 + y2) % 2);

    // Виведення результату
    if (same_color) {
        cout << "Поля мають однаковий колір." << endl;
    } else {
        cout << "Поля мають різний колір." << endl;
    }

    //Integer36
    double x, y;
    
    // Введення значення для x
    cout << "Введіть значення x: ";
    cin >> x;

    // Обчислення виразу y
    double numerator = cbrt(pow(x, 2) - 2 * fabs(sin(pow(x, 3))) * fabs(tan(x)) * pow(2.5, cos(x)));
    double denominator = 0.625 * x + 2 * log2(pow(x, 3) + 7.5);
    y = numerator / denominator;

    // Виведення результату
    cout << "Значення y: " << y << endl;

    return 0;
}
