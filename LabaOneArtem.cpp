#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double length, width, perimeter, area, diagonalLength;
	setlocale(LC_ALL, "Russian");

	//запрашиваем данные из терминала
	cout << "Введите длину прямоугольника: ";
	cin >> length;
	cout << "Введите ширину прямоугольника: ";
	cin >> width;

    if (length <= 0 || width <= 0) {
    	cout << "прямоугольник не существует" << endl;
    } else {
		//вычисления
    	perimeter = 2 * (length + width);
    	area = length * width;
    	diagonalLength = sqrt(length * length + width * width);
		
		//вывод)
    	cout << "Периметр: " << perimeter << endl;
    	cout << "Площадь: " << area << endl;
    	cout << "Длина диагонали: " << diagonalLength << endl;
    }

	return 0;
}
