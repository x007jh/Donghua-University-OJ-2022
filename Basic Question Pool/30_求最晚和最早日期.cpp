#include <iostream>
using namespace std;

int main(){
    typedef struct{
        int year;
        int month;
        int day;
    }date;

    int n, flag = 0;
    while (cin >> n){

        if (flag == 1){
            cout << endl;
        }

        date a, max, min;
        max.year = 1;       max.month = 1;      max.day = 1;
        min.year = 2015;    min.month = 12;     min.day = 31;

        for (int i = 0; i < n; i++){
            cin >> a.year >> a.month >> a.day;
            if (a.year > max.year || (a.year == max.year && a.month > max.month) || (a.year == max.year && a.month == max.month && a.day > max.day)){
                   max = a;
               }
            if (a.year < min.year || (a.year == min.year && a.month < min.month) || (a.year == min.year && a.month == min.month && a.day < min.day)){
                   min = a;
               }
        }

        cout << max.year << ' ' << max.month << ' ' << max.day << endl;
        cout << min.year << ' ' << min.month << ' ' << min.day;
        flag = 1;
    }
    return 0;
}