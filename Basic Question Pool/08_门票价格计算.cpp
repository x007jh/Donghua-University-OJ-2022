#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int i;
    double cost;
    cin >> i;

    if (i <= 20){
        cost = 5 * i;
    } else if (i > 20 && i <= 40){
        cost = 5 * i * 0.9;
    } else if (i > 40 && i <= 80){
        cost = 5 * i * 0.85;
    } else if (i > 80 && i <= 120){
        cost = 5 * i * 0.8;
    } else if (i > 120){
        cost = 5 * i * 0.7;
    }

    cout << fixed << setprecision(2) << cost;
    return 0;
}