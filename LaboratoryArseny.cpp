#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "RU");

    double S, poluPer, Perimetr, a, b, c;
    std::cout << "Введите стороны треугольника:" << std::endl;
    std::cin >> a >> b >> c;

    Perimetr = a + b + c; // Нахождение периметра
    
    poluPer = Perimetr / 2; // Нахождение полупериметра

    S = sqrt(poluPer * (poluPer - a) * (poluPer - b) * (poluPer - c)); // Площадь по формуле Герона

    std::cout << "Периметр:" << Perimetr << std::endl;
    std::cout << "Площадь:" << S << std::endl;

    if ((a == b && a != c) || (b == c && b != a) || (a == c && a != b)) {
        std::cout << "Треугольник равнобедренный" << std::endl;
    } 
    else {
        std::cout << "Треугольник не равнобедренный" << std::endl;
    }

    return 0;

}