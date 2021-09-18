#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double a,b, res,d;
    int n,i;
    cout << "Введите n" << endl;
    cin >> n;
    cout << "Введите начальное значение x" << endl;
    cin >> a;
    cout << "Введите конечное значение x" << endl;
    cin >> b;
    d = b - a;
    cout << "       Таблица функции" << endl;
    cout << "N   X                Y" << endl;
    for (i = 1; i <= n; i++) {
        res = abs(sin(sqrt(10.5 * a))) / (pow(a, 2.0 / 3.0) - 0.143) + 2 * a * M_PI;
        cout << i << "  " << setprecision(6) << a << "     "<<setprecision(6)<<res << endl;
        a = ((d) / (n-1))+a;
        

    }
    return 0;
}