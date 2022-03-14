#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double threshold;
    cin >> threshold;
    double num = 0, tail;
    int i = 1, count = 0;
    long long denominator = 1;
        while (1){
            denominator *= i;
            i++;
            tail = 1.0 / denominator;
            if (tail >= threshold){
                num += tail;
                count++;
            } else {
                break;
            }
        }
        if (threshold == 2){
            cout << fixed << setprecision(6) << num << ' ' << count << endl;
        } else {
            cout << fixed << setprecision(6) << num + 1 << ' ' << count + 1 << endl;
        }
}