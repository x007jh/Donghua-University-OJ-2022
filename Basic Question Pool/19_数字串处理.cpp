#include <iostream>
using namespace std;

int main() {
	int n = 0, nums[100] = {0};
	int i = 0;
	int tempCount = 0, maxCount = 0, maxIndex = 0;//每个数字计数、最大计数、重复最多数字编号 
	
	while (cin >> n){
		maxCount = 1;   //重置最大计数值
		maxIndex = 0;   //初始化最多重复数字编号
		
		for (i = 0; i < n; i++){
			cin >> nums[i];
		}
		
        //考虑特殊情况：仅一个数字
		if (n == 1){
			cout << nums[0] << 1 << endl;
		} 
		
		for (i = 0; i < n - 1; ){

            //判断相邻两数是否相等
			if (nums[i + 1] == nums[i]){
				tempCount = 2;
				i += 2;

                //统计出现次数
				while (i < n && nums[i] == nums[i - 1]){
					tempCount++;
					i++;
				}

                //更新最大计数
				if (maxCount < tempCount){
					maxCount = tempCount;
					maxIndex = i - 1; 
				}
			} else {
				i++;
			}
		}
		cout << nums[maxIndex] << ' ' << maxCount << endl;
	}
	return 0;
}