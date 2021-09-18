#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double x, res, s;
    int n,k,i;
    s = 0;
    k = 1;
    cout << "Введите n" << endl;
    cin >> n;
    cout << "Введите x" << endl;
    cin >> x;
    for (i = 1; i <= n; i++) {
        res = (abs(x - k) * sqrt(pow(M_E, (k - 1.0)))) / log(2 + pow(x, k) + pow(x, (2*k + 1.0)));
        s = s + res;
    }
    res =s* pow(M_E, (sqrt(x / n)));
    cout << res;
    //system ("pause");
    return 0;

}