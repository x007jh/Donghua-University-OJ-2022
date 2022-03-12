#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a, b;
    char x;
    cin >> a >> b;
    cin >> x;
    double result;

    switch (x){
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b == 0){
                cout << "Wrong!";
                return 0;
            } else {
                result = a / b;
            }
            break;
    }
    cout << fixed << setprecision(1) << result;
}