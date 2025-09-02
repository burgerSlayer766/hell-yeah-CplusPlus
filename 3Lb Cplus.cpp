#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double y;
	double c = 7;

	cout << "" << endl;
	for (double x = 0; x <= 1; x += 0.1) {
		y = pow(2, -x) * pow(c, x);
		cout << y << endl;
	}
	cout << "" << endl << endl;

	double x = -1;



	while (x <= 1) {
		y = pow(2, -x) * pow(c, x);
		x += 0.1;
		cout << y << endl;
	}
	cout << "" << endl << endl;

	x = 0.1;

	do {
		y = pow(2, -x) * pow(c, x);
		x += 0.1;
		cout << y << endl;
	} while (x <= 1);

	system("pause");
}