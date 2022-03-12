#include <iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    for (; n > 0; n--){
        sum += n;
    }
    cout << sum;
    return 0;
}