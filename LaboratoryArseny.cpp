#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "RU");
    using namespace std;

    double S, poluPer, Perimetr, a, b, c;
    cout << "Введите стороны треугольника:";
    cin >> a >> b >> c;

    Perimetr = a + b + c; // Нахождение периметра
    
    poluPer = Perimetr / 2; // Нахождение полупериметра

    S = sqrt(poluPer * (poluPer - a) * (poluPer - b) * (poluPer - c)); // Площадь по формуле Герона

    cout << "Периметр:" << Perimetr << std::endl;
    cout << "Площадь:" << S << std::endl;

    if ((a == b && a != c) || (b == c && b != a) || (a == c && a != b)) { //Проверка на равнобедренность
        cout << "Треугольник равнобедренный" << std::endl;
    } 
    else {
        cout << "Треугольник не равнобедренный" << std::endl;
    }

    return 0;

}