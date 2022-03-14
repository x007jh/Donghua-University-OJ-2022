#include <iostream>
using namespace std;

int main(){
    int n, total;
    for (int i = 0; i < 10; i++){
        cin >> n;
        total = 0;
        if (n == 0){
            return 0;
        } else {
            while (n >= 2){
                n -= 3;
                n += 1;
                total += 1;
            }
        }
        cout << total << endl;
    }
    return 0;
}