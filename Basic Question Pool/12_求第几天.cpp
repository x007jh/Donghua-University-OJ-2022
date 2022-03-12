#include <iostream>
using namespace std;

int main(){
    int y, m, d;
    cin >> y >> m >> d;
    int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)){
        day[2]++;
    }

    int count = 0;
    for (int i = 1; i < m ; i++){
        count += day[i];
    }
    count += d;
    
    cout << count;
    return 0;
}