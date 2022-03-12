#include <iostream>
using namespace std;

int main(){
	int a, b, c, x, y, ans, count = 0;
	while (cin >> a >> b >> c){
		x = a * 100 + b * 10 + c;
		y = c * 100 + b * 10 + a;
		ans = x * y;
		while (ans){
			if (ans % 10 == a || ans % 10 == b || ans % 10 == c){
                count++;
            }
			ans /= 10;
		}
		cout << x * y << ' ' << count << '\n';
		count=0;
	}
	return 0;
}