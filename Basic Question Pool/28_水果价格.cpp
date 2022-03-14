#include <iostream>
#include <iomanip>
using namespace std;

//注：无法AC，计算结果无误，不知道哪里出了格式问题
int main(){
    int m, flag = 0;
    double g;
    char d;

    while (cin >> m){
        double price[5] = {0.00}, weight[5] = {0.00};

        if (flag == 1){
            cout << endl;
        }

        for (int i = 0; i < m; i++){
            cin >> d >> g;
            switch (d){
                case 'a':
                    price[0] = g * 1.50;
                    weight[0] = g;
                    break;
                case 'o':
                    price[1] = g * 1.40;
                    weight[1] = g;
                    break;
                case 'b':
                    price[2] = g * 1.48;
                    weight[2] = g;
                    break;
                case 'p':
                    price[3] = g * 1.08;
                    weight[3] = g;
                    break;
            }
        }

        //计算总价和总重量
        for (int i = 0; i < 4; i++){
            price[4] += price[i];
            weight[4] += weight[i];
        }

        //输出第一行
        cout << "       apple  orange banana pineapple sum" << endl;

        //输出第二行
        cout << "price  ";
        cout << left << setw(7) << fixed << setprecision(2) << price[0] << left << setw(7) << price[1] << left << setw(7) << price[2];
        cout << left << setw(10) << price[3];
        cout << left << setw(7) << price[4] << endl;

        //输出第三行
        cout << "weight ";
        cout << left << setw(7) << weight[0] << left << setw(7) << weight[1] << left << setw(7) << weight[2];
        cout << left << setw(10) << weight[3];
        cout << left << setw(7) << weight[4];

        flag = 1;
    }
    return 0;
}