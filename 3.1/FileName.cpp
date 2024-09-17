// Lab_03_1.cpp
// < Циган Лілія Валеріївна >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 17

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x; // вхідний параметр
    double y; // результат обчислення виразу
    double A; // проміжний результат - функціонально стала частина виразу
    double B; // проміжний результат - функціонально змінна частина виразу

    cout << "x = ";
    cin >> x;

    A = pow(x, 2) + 1;

    // спосіб 1: розгалуження в скороченій формі
    if (x < 4)
        B = 4 * pow(x, 7) - pow(x, 5) + pow(x, 3) - 2;
    else if (x >= 4 && x < 7)
        B = atan((fabs(x) + 1) / 2.) + 8.3 * x;
    else
        B = log((2 * x) + (exp(4 * x + 1)));

    y = A + B;
    cout << endl;
    cout << "1) y = " << y << endl;

    // спосіб 2: розгалуження в повній формі
    if (x < 4)
        B = 4 * pow(x, 7) - pow(x, 5) + pow(x, 3) - 2;
    else if (x >= 7)
        B = log((2 * x) + (exp(4 * x + 1)));
    else
        B = atan((fabs(x) + 1) / 2.) + 8.3 * x;

    y = A + B;
    cout << "2) y = " << y << endl;

    cin.get();
    return 0;
}