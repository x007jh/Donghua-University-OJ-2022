#include <iostream>
using namespace std;

int main(){
	int n, s;
	while (cin >> n >> s){
		for (int i = 1; i <= s; i++){
			int line = 0;   //记录当前打印到第几行
			while (line != i){
				cout << n;
				n++;
				if (n == 10){
                    n = 1;
                }
				line++;
				if (line != i){
                    cout << ' ';
                }
			}
			cout << '\n';
		 } 
		 cout << '\n';
	}
	return 0;
 } 