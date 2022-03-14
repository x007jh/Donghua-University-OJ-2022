#include <iostream>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        for (int i = 1; i < n; i++){
            cout << i << '+';
        }
        for (int i = n; i > 0; i--){
            cout << i;
            if (i != 1){
                cout << '+';
            }
        }
        cout << endl;
    }
    return 0;
}