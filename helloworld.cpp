#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x,res;

   cin>>x;
    res=abs(sin(sqrt(10.5*x)))/(pow(x,2.0/3.0)-0.143)+2*x*acos(-1);
    cout<<res;
    //system ("pause");
    return 0;
    
}