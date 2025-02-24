#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double length, width;
	setlocale(LC_ALL, "Russian");

	//запрашиваем данные
	cout << "Введите длину прямоугольника: ";
	cin >> length;
	cout << "Введите ширину прямоугольника: ";
	cin >> width;

	//вычисления
	double perimeter = 2 * (length + width);
	double area = length * width;
	double diagonalLength = sqrt(length * length + width * width);

	//вывод результатов
	cout << "Периметр: " << perimeter << endl;
	cout << "Площадь: " << area << endl;
	cout << "Длина диагонали: " << diagonalLength << endl;

	return 0;
}
