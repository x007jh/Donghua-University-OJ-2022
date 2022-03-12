#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        int count = 0;
        for (int i = 1; i <= n; i++){
            if (n % i == 0){
                count += i;
            }
        }
        double ans = (double)count / n;
        cout << fixed << setprecision(2) << ans << '\n';
    }
    return 0;
}