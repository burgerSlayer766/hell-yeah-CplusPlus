

#include <iostream>

using namespace std;
int main()

{
	setlocale(LC_ALL, "Russian");

	double x;

	double y;

	cout << ("ВВЕДИТЕ ЧИСлО ");

	cin >> x;

	cout << ("ВВЕДИТЕ ЧИСЛО ");

	cin >> y;


	double c = pow((y * pow(x, 2) - 1), 2) / 2 * (pow(cos(y), 2) - sin(pow(x, 2)));

	cout << c;
}