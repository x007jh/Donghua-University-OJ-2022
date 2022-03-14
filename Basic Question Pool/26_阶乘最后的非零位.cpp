#include <iostream>
using namespace std;

int main(){
    int n, product = 1;
    cin >> n;

    //阶乘运算
    for (int i = 1; i <= n; i++){
        product *= i;

        //每当末位出现0，则对10取余
        while (product % 10 == 0){
            product /= 10;
        }
        product %= 1000;    //控制product的值在1000以内（仅保留有效信息，防止溢出）
    }

    cout << product % 10;
    return 0;
}