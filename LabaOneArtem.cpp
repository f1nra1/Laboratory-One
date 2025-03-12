#include <iostream>
#include <cmath>
//dfdf
using namespace std;

int main() {
	double length, width, perimeter, area, diagonalLength;
	setlocale(LC_ALL, "Russian");

	//запрашиваем данные
	cout << "Введите длину прямоугольника: ";
	cin >> length;
	cout << "Введите ширину прямоугольника: ";
	cin >> width;

	//вычисления
	perimeter = 2 * (length + width);
	area = length * width;
	diagonalLength = sqrt(length * length + width * width);

	//вывод результатов
	cout << "Периметр: " << perimeter << endl;
	cout << "Площадь: " << area << endl;
	cout << "Длина диагонали: " << diagonalLength << endl;

	return 0;
}
