#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    
    //一元二次方程求根公式
    double x1 = (-b + (sqrt(pow(b, 2) - 4 * a * c))) / 2 / a;
    double x2 = (-b - (sqrt(pow(b, 2) - 4 * a * c))) / 2 / a;

    cout << fixed << setprecision(2) << x1 << " " << x2;
    return 0;
}