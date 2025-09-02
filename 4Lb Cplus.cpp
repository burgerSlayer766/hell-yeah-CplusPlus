#include <iostream>
using namespace std;

double mediana(double, double, double);

int main()
{
    setlocale(LC_ALL, "Russian");

    double a;

    cout << ("введите число");

    cin >> a;

    double b;

    cout << ("введите число");

    cin >> b;

    double c;

    cout << ("введите число");

    cin >> c;

    double a1 = mediana(a, b, c);
    cout << a1;
}


double mediana(double A, double B, double C)
{
    double m = 0.5 * sqrt(2 * pow(B, 2) + (2 * pow(C, 2) - (pow(A, 2))));
    return m;
}