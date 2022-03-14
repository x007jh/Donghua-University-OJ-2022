#include <iostream>
using namespace std;

//一维数组构造循环顺序表
int solution(int num[], int n, int m){
    int dieout = 0, index = 0;      //已经出圈人数，移动指针

    //当劫匪还没有全部出圈时
    while (dieout < n){
        index = (index + m) % (n - dieout);
        if (num[index] <= n / 2 && dieout < n / 2){
            return 0;
        }

        //把出圈的人后面的人都往前移动一位
        int i = index + 1;
        while (i < n - dieout){
            num[i - 1] = num[i];
            i++;
        }
        dieout++;
    }
    return 1;
}

int main(){
    int k;
    while (cin >> k){
        int num[21] = {0};
        for (int i = 0; i < 2 * k; i++){
            num[i] = i + 1;
        }
        for (int m = 1; ; m++){
            if (solution(num, 2 * k, m) == 1){
                cout << m + 1 << endl;
                break;
            }
        }
    }
    return 0;
}