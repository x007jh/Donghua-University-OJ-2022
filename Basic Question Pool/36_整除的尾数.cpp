#include <iostream>
#include <iomanip>
using namespace std;

int getResult(int a, int b, int tail[]){
    int count = 0;

    //遍历0～99的整数，判断是否为符合要求的尾数
    for (int i = 0, j = 0; i < 100; i++){
        if ((a * 100 + i) % b == 0){
            tail[j++] = i;
            count++;
        }
    }
    return count;
}

int main(){
	int a, b, tail[100], count;
    scanf("%d %d", &a, &b);
    count = getResult(a, b, tail);
    for (int i = 0; i < count; i++){
        if (i > 0){
            cout << ' ';
        }
        cout << left << setw(2) << setfill('0') << tail[i];
    }
    cout << endl;
	return 0;
}