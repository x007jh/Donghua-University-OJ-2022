#include <iostream>
using namespace std;

int main(){
    int n, a[7] = {0};      //用数组a记录星期一到星期六分别出现的次数
    while (cin >> n){
        int year = 1899, date = 13, a[7] = {0};
        for (int i = 0; i < n; i++){
            year++;
            for (int j = 1; j <= 12; j++){

                //4月，6月，9月，11月为小月，加30天
                if (j == 5 || j == 7 || j == 10 || j == 12){
                    date += 30;
                }
                
                //对于1月，需先判断当前是第几年
                else if (j == 1){
                    if (year != 1900){
                        date += 31;
                    }
                }
                
                //1月，3月，5月，7月，8月，10月为大月，加31天
                else if (j == 2 || j == 4 || j == 6 || j == 8 || j == 9 || j == 11){
                    date += 31;
                } else {

                    //判断平年闰年
                    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
                        date += 29;
                    } else {
                        date += 28;
                    }
                }

                //对应日期天数自增一次
                a[date % 7]++;
            }
        }
        for (int i = 0; i < 7; i++){
            cout << a[(i + 6) % 7];     //按照六、日、一、二、三、四、五的顺序输出
            if (i < 6){
                cout << ' ';
            }
            if (i == 6){
                cout << endl;
            }
        }
    }
	return 0;
}