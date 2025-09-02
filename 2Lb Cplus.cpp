#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    double x;
    double y;
    double e;
    double a;
    double b;
    double n = 0;
    double g;
    double l;

    cin >> x;
    cout << ("ВВЕДИТЕ ЧИСлО ");

    cin >> y;
    cout << ("ВВЕДИТЕ ЧИСлО ");

    cin >> e;
    cout << ("ВВЕДИТЕ ЧИСлО ");

    cin >> a;
    cout << ("ВВЕДИТЕ ЧИСлО ");


    cin >> b;
    cout << ("ВВЕДИТЕ ЧИСлО ");

    cin >> g;

    double minEl = y;
    if (minEl > a* x)
    {
        minEl = a * x;
    }

    double maxEl = pow(x, 3) * pow(e, y);
    if (maxEl > sqrt(log(pow(y, 2))))
    {
        maxEl = sqrt(log(pow(y, 2)));
    }

    double k;

    if (x * y > 0) {
        double z = pow(1 - e, x * y + a * b);

        cout << (z); double minEl = y;
        if (minEl > a* x)
        {
            minEl = a * x;
        }

        double maxEl = pow(x, 3) * pow(e, y);
        if (maxEl > sqrt(log(pow(y, 2))))

        {


            maxEl = sqrt(log(pow(y, 2)));

        }
        double k;
    }
    else if (n = x * y) {
        double c = (b - (minEl));

        cout << (c);

    }
    else if (x * y < 0) {
        double k = maxEl;
        cout << (k);

    }
}

