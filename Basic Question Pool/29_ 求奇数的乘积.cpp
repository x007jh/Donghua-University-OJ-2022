#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a, product = 1;
    for (int i = 0; i < n; i++){
        cin >> a;
        if (a % 2 != 0){
            product *= a;
        }
    }
    cout << product;
    return 0;
}