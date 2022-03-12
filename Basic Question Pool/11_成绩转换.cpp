#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    if (t > 100 || t < 0){
        cout << "Score is error!";
        return 0;
    } else if (t < 60){
        cout << 'E';
        return 0;
    } else if (t < 70){
        cout << 'D';
        return 0;
    } else if (t < 80){
        cout << 'C';
        return 0;
    } else if (t < 90){
        cout << 'B';
        return 0;
    } else if (t <= 100){
        cout << 'A';
        return 0;
    }
}