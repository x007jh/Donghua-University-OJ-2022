#include <iostream>
using namespace std;

int main(){
    int a, b;
    while (cin >> a >> b){
        int line = 0;       //记录当前输出到第几行（用于控制换行符）
        
        //遍历a～b范围内的所有整数
        for (int i = a; i <= b; i++){
            string num = to_string(i);
            int flag = 1;     //标记截至目前是否符合条件

            //判断是否回文
            for (int j = 0; j < num.length() / 2; j++){
                if (num[j] != num[num.length() - j - 1]){
                    flag = 0;
                }
            }

            //若回文，判断是否是质数
            if (flag == 1){
                for (int k = 2; k < i; k++){
                    if (i % k == 0){
                        flag = 0;
                    }
                }
            }

            //判断是否是第一行，若不是，需要先输出换行符
            if (flag == 1){
                if (line != 0){
                    cout << endl;
                }
                cout << i;
                line++;
            }
        }
    }
    return 0;
}