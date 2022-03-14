#include <iostream>
using namespace std;

int main(){
	int T;
	cin >> T;
	for (int i = 0; i < T; i++){
        int a, b, sum = 0, count = 2, flag = 0;     //flag用于记录当前是第几次输出
		cin >> a >> b;
		sum = a * 100;

        //从0开始遍历后两位尾数
		for (int j = 0; j <= 99; j++){

            //尾数为00的情况，直接输出00
			if (j == 0 && (sum + j) % b == 0){
				cout << 00;
				flag++;
			}
            
            //若是第一次输出值，直接输出即可
            else if ((sum + j) % b == 0 && flag == 0){
				cout << j;
				flag++;
			}
            
            //若是第二次输出值，在前面加空格
            else if ((sum + j) % b == 0 && flag != 0){
				cout << ' ' << j;
				flag++;
			}
		}
        cout << endl;
	}
	return 0;
}