#include <iostream>
#include <cmath>

int main(){
    setlocale(LC_ALL, "RU");

    int P, S, poluPer;
    int a, b, c;
    std::cout << "Введите стороны треугольника:" << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    P = a + b + c; // Нахождение периметра
    
    poluPer = P / 2; // Нахождение полупериметра

    S = sqrt(poluPer * (poluPer - a) * (poluPer - b) * (poluPer - c)); // Площадь по формуле Герона

    std::cout << "Периметр:" << P << std::endl;
    std::cout << "Площадь:" << S << std::endl;

    // Проверка на равнобедренность
    if(a == b && a != c && b != c){
        std::cout << "Треугольник равнобедренный" << std::endl;
    }  
    else if(b == c && b != a && c != a){
        std::cout << "Треугольник равнобедренный" << std::endl;
    }
    else if(a == c && a != b && c != b){
        std::cout << "Треугольник равнобедренный" << std::endl;
    }
    else
        std::cout << "Треугольник не равнобедренный" << std::endl;

    return 0;

}