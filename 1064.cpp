#include <iostream>
using namespace std;

//bool Cmp()

int main()
{
//此题参考网上的输出格式，很好的方法
//当题目规定最后一个数据末尾不能输出空格的时候
//可以定义一个flag，让第一个元素原样输出，此后的每一个元素输出前添加一个空格。 
//一开始想的实在是太过于复杂，忽略了本题的范围很小，最大的数也不过是9999，所以直接用整数的数组下标来表示各个和 
	int N;
	cin >> N;
	int count = 0;
	int re[50] = {0};
	for(int i = 0; i < N; i++){
		int n;
		cin >> n;
		int sum = 0;
		while(n){
			sum += n % 10;
			n /= 10;
		}
		++re[sum];
	}
	for(int i = 0; i < 50; i++)
		if(re[i])
			++count;
	cout << count << endl;
	int flag = 1;
	for(int i = 0; i < 50; i++){
		if(re[i]){
			if(flag){
				cout << i;
				flag = 0;
			}
			else
				cout << " " << i;	
		}
	}
	return 0;
}
