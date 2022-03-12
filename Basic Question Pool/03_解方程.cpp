#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    float x = (5 - 3.0 * b) / 2 / a;
    cout << fixed << setprecision(1) << x;
    return 0;
}