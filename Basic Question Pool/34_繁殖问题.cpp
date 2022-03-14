#include <iostream>
using namespace std;

int main(){
    int n, flag = 0;
    int a[50] = {1, 1, 2, 3, 5, 7, 10};
    for (int i = 7; i < 50; i++){
        a[i] = a[i - 2] + a[i - 3] + a[i - 4];
    }
    while (cin >> n){
        if (flag == 1){
            cout << endl;
        }
        cout << a[n - 1];
        flag = 1;
    }
    return 0;
}