#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    //结构体定义 - 食材
    typedef struct{
        string kind;
        double quantity;
        double price;
    }food;

    int m, n;
    cin >> m;
    for (int i = 0; i < m; i++){
        cin >> n;
        food a[n];
        double cost = 0.00;
        for (int j = 0; j < n; j++){
            cin >> a[j].kind >> a[j].quantity >> a[j].price;
            cost += a[j].quantity * a[j].price;
        }
        cout << fixed << setprecision(1) << cost;

        //若不是最后一组数据，就打印换行符
        if (i != m - 1){
            cout << endl;
        }
    }
    return 0;
}