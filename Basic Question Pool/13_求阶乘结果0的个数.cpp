#include <iostream>
using namespace std;

int main(){
    int n, temp, count;
    while (cin >> n){
        count = 0;
        temp = n / 5;
        while (temp != 0){
            count += temp;
            temp /= 5;
        }
        cout << count << '\n';
    }
    return 0;
}