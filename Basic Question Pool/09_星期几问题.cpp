#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    switch (n){
        case 0:
            s = "Sunday";
            break;
        case 1:
            s = "Monday";
            break;
        case 2:
            s = "Tuesday";
            break;
        case 3:
            s = "Wednesday";
            break;
        case 4:
            s = "Thursday";
            break;
        case 5:
            s = "Friday";
            break;
        case 6:
            s = "Saturday";
            break;
    }
    cout << s;
    return 0;
}