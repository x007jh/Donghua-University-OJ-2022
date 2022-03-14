#include <iostream>
using namespace std;

int main(){
    int N, n;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> n;
        int flag = 1;

        if (n == 1){
            flag = 0;
        }

        for (int j = 2; j < n; j++){
            if (n % j == 0){
                flag = 0;
            }
        }

        if (flag == 1){
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}