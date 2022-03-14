#include <iostream>
using namespace std;

int main(){
    int a, b;
    while (cin >> a >> b){
        if (a == 0 && b == 0){
            return 0;
        } else {
            int x, y;
            for (x = 1; x <= 100; x++){
                for (y = 1; y <= 100; y++){
                    if (a * a + x * x == b * b + y * y){
                        cout << x << ' ' << y << endl;
                    }
                }
            }
            cout << endl;
        }
    }
    return 0;
}