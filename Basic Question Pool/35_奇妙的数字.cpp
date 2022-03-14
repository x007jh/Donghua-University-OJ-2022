#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n){
        int count = 0;
        for (int i = 1; ; i++){
            int sum = 0, num = i;
            while (num){
                sum += (num % 10);
                num /= 10;
            }
            if (sum % 17 == 0){
                sum = 0;
                num = i + 1;
                while (num){
                    sum += (num % 10);
                    num /= 10;
                }
                if (sum % 17 == 0){
                    count++;
                    i++;
                }
            }
            if (count == n){
                cout << i - 1 << endl;
                break;
            }
        }
    }
    return 0;
}