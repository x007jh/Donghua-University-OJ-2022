#include <iostream>
using namespace std;

int main(){
	int y, m, d, t;     //year, month, day, time
	int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin >> y >> m >> d >> t;
	m += t;
	while (m > 12){
		m = m - 12;
		y++;
	}

	//判断平年闰年
	if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)){
		month[2]++;
	}

	cout << y << " " << m << " " << (d < month[m] ? d : month[m]);
	return 0;
}