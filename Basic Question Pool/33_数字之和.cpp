#include <iostream>
using namespace std;

int main(){
    int n, flag = 0;
    while (cin >> n){
        int sum = 0;
        while (n){
            sum += n % 10;
            n /= 10;
        }
        if (flag != 0){
            cout << endl;
        }
        cout << sum;
        flag++;
    }
    return 0;
}