#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int arry[N + 1] = {0};
	for(int i = 0; i < N; i++)
		scanf("%d",&arry[i]);
	int sum = 0;
	for(int i = 0; i < N; i++){
		for(int j = i + 1; j < N; j++){
			sum += arry[i] * 10 + arry[j];
			sum += arry[j] * 10 + arry[i];
		}
	}
	cout << sum;
	return 0;	
}

