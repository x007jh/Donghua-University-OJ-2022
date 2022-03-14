#include <iostream>
using namespace std;
 
int main(){
	int t;
	int flag = 1;
	while (cin >> t){
        int i;      //i表示除末位7之外的其他数字，例如i=22，实际代表227
		for (i = 0; i <= 99999; i++) {
			int a = 1, temp = i;    //a是与i同等长度，但最高位为1其与位皆为零的整数

            //计算将7移到首位需要乘以10的多少次方
			while (temp != 0){
				temp /= 10;
				a *= 10;
			}

            //判断该数是否符合条件
			if ((a * 7 + i) % (i * 10 + 7) == 0 && (a * 7 + i) / (i * 10 + 7) == t){
				if (flag){
					flag = 0;
				}
				cout << (i * 10 + 7) << '\n';
				break;
			}
		}
		if (i > 99999){
            cout << "No\n";
		}
	}
	return 0;
}